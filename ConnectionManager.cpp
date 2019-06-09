#include "ConnectionManager.h"

ConnectionManager::ConnectionManager()
{
	init();
}

void ConnectionManager::init()
{
	timer = new QTimer();
	serialPort = new QSerialPort();
	
	connect(timer, SIGNAL(timeout()), this, SLOT(FindingTimeOut()));
}

bool ConnectionManager::IsConnect()
{
	if (serialPort->isOpen())
		return true;

	return false;
}

void ConnectionManager::Disconnect()
{
	if (serialPort->isOpen())
	{
		serialPort->close();
		isDeltaPortConnected = false;
	}
}

QString ConnectionManager::GetNamePort()
{
	if (serialPort == NULL)
		return QString("Null");
	return serialPort->portName();
}

void ConnectionManager::SetBaudrate(int baud)
{
	this->baudrate = baud;
}

void ConnectionManager::Send(QString msg)
{
	transmitLine = msg;
	msg += "\n";
	if (serialPort->isOpen())
	{
		serialPort->write(msg.toStdString().c_str(), msg.size());
	}
	else
		Debug("Serial port is not available !");
}

void ConnectionManager::ReadData()
{
	QSerialPort* sP = qobject_cast<QSerialPort*>(sender());

	while (sP->canReadLine())
	{
		receiveLine = sP->readLine();
		emit FinishReadLine(receiveLine);

		if (receiveLine.mid(0, 8) == "YesDelta")
		{
			delete serialPort;
			serialPort = sP;
			emit DeltaResponeReady();

			isDeltaPortConnected = true;
		}

		if (receiveLine.mid(0, 2) == "Ok" || (receiveLine.indexOf('k') > -1 && receiveLine.indexOf('O') > -1))
		{
			if (transmitLine == "G28")
			{
				Send("Position");
			}

			emit DeltaResponeGcodeDone();
		}

		if (receiveLine.indexOf(" ,") > -1 && transmitLine == "Position")
		{
			QList<QString> nums = receiveLine.split(" ,");

			if (nums.size() == 3)
				emit InHomePosition(nums[0].toFloat(), nums[1].toFloat(), nums[2].toFloat());
		}
		if (receiveLine.at(0) == 'P' && transmitLine == "M701")
		{
			QString convenyorPosS = receiveLine.mid(1);
			float convenyorPos = convenyorPosS.toFloat();
			emit ReceiveConvenyorPosition(convenyorPos, 0);
		}
	}	
}

void ConnectionManager::FindDeltaRobot()
{
	Q_FOREACH(QSerialPortInfo portInfo, QSerialPortInfo::availablePorts())
	{
		QSerialPort* sP = new QSerialPort();

		QString portName = portInfo.portName();
		sP->setPortName(portName);
		sP->setBaudRate(baudrate);

		portList.push_back(sP);				

		if (sP->open((QIODevice::ReadWrite)) == true)
		{
			connect(sP, SIGNAL(readyRead()), this, SLOT(ReadData()));

			QString name = sP->portName();

			sP->write("IsDelta\n");
			//sP->write("IsDelta\n");
		}	
	}

	timer->start(200);
}

void ConnectionManager::FindingTimeOut()
{
	static int order = 0;
	
	order++;

	QString waitS = "";

	for (int i = 0; i < order; i++)
	{
		waitS += ".";
	}

	Debug(waitS);

	if (order < 20 && isDeltaPortConnected == false)
		return;

	order = 0;

	for(int i = 0; i < portList.length(); i++)
	{
		if (portList.at(i)->portName() != serialPort->portName())
		{
			portList.at(i)->close();
			delete portList.at(i);
		}
	}
	portList.clear();

	timer->stop();
}
