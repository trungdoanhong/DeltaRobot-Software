#include "VariableManager.h"
#include "qglobal.h"

VariableManager &VariableManager::instance()
{
    static VariableManager _instance;
    return _instance;
}

void VariableManager::addItemModel(QStandardItemModel *model)
{
    model->setHorizontalHeaderLabels(QStringList() << "Name" << "Value");    
    itemModelList.append(model);
}

void VariableManager::addVar(const QString &key, const QVariant &value)
{
    const QString fullKey = getFullKey(key);
    std::lock_guard<std::mutex> lock(dataMutex);
    dataMap[fullKey] = value;
    emit varAdded(fullKey, value);
}

void VariableManager::updateVar(const QString &key, const QVariant &value)
{
    const QString fullKey = getFullKey(key);
    std::lock_guard<std::mutex> lock(dataMutex);
    dataMap[fullKey] = value;
    emit varUpdated(fullKey, value);
}

QVariant VariableManager::getVar(const QString &key, QVariant defaultValue)
{
    const QString fullKey = getFullKey(key.trimmed().replace("#", ""));

    QStringList objKeys = ObjectInfos.keys();

    for (const QString &objKey : objKeys)
    {
        if (fullKey.contains(objKey))
        {
            QStringList paras = fullKey.split(".");
            QString last = paras.last();
            bool isInt = false;
            int index = last.toInt(&isInt);

            if (isInt && index < ObjectInfos[objKey]->size())
            {
                if (last == "X")
                {
                    return ObjectInfos[objKey]->at(index).center.x();
                }
                else if (last == "Y")
                {
                    return ObjectInfos[objKey]->at(index).center.y();
                }
                else if (last == "Type")
                {
                    return ObjectInfos[objKey]->at(index).type;
                }
            }
        }
    }

    std::lock_guard<std::mutex> lock(dataMutex);
    return dataMap.value(fullKey, defaultValue);
}

void VariableManager::removeVar(const QString &key)
{
    const QString fullKey = getFullKey(key);
    std::lock_guard<std::mutex> lock(dataMutex);

    auto it = dataMap.begin();
    while (it != dataMap.end())
    {
        if (it.key().startsWith(fullKey))
        {
            emit varRemoved(it.key());
            it = dataMap.erase(it);
            return;
        }
        else
        {
            ++it;
        }
    }
}

bool VariableManager::containsSubKey(const QString &key)
{
    const QString fullKey = getFullKey(key);
    std::lock_guard<std::mutex> lock(dataMutex);
    for (auto it = dataMap.begin(); it != dataMap.end(); ++it)
    {
        if (it.key().startsWith(fullKey))
        {
            return true;
        }
    }
    return false;
}

bool VariableManager::containsFullKey(const QString &key)
{
    const QString fullKey = getFullKey(key);
    std::lock_guard<std::mutex> lock(dataMutex);
     return (dataMap.find(fullKey) != dataMap.end());
}

void VariableManager::saveToQSettings()
{
    std::lock_guard<std::mutex> lock(dataMutex);
    settings.clear();
    for (auto it = dataMap.constBegin(); it != dataMap.constEnd(); ++it)
    {
        settings.setValue(it.key(), it.value());
    }
}

void VariableManager::loadFromQSettings()
{
    connect(&instance(), &VariableManager::varUpdated, this, &VariableManager::UpdateVarToModel);
    connect(&instance(), &VariableManager::varAdded, this, &VariableManager::UpdateVarToModel);

    std::lock_guard<std::mutex> lock(dataMutex);
    for (const QString &key : settings.allKeys())
    {
        dataMap[key] = settings.value(key);
        emit varAdded(key, settings.value(key));
    }
}

QSettings *VariableManager::getSettings()
{
    saveToQSettings();
    return &settings;
}

void VariableManager::UpdateVarToModel(QString key, QVariant value)
{
    for (QStandardItemModel* model : itemModelList)
    {
        QStandardItem *parent = model->invisibleRootItem();
        UnityTool::UpdateVarToModel(parent, key, value);
    }
}

const QString VariableManager::getFullKey(const QString key)
{
    QString fullKey = key;

    if (!Prefix.isEmpty() && !key.startsWith(Prefix))
    {
        fullKey = Prefix + "." + key;
    }

    fullKey.replace("#", "");
    return fullKey;
}
