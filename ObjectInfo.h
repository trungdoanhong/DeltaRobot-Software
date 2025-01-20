#ifndef OBJECTINFO_H
#define OBJECTINFO_H

#include <QVector3D>

class ObjectInfo {
public:
    int id;
    int type;
    QVector3D center;  // X, Y, Z position
    double width;
    double length;
    double height;
    double angle;
    bool isPicked;  // Indicates if the object has been picked
    QVector3D offset;

    ObjectInfo(int id, int type, QVector3D center, double width, double length, double angle, bool isPicked=false, QVector3D offset=QVector3D(0,0,0))
        : id(id), type(type), center(center), width(width), length(length), angle(angle), isPicked(isPicked), offset(offset) {}
    ObjectInfo(int id, int type, QVector3D center, double width, double length, double height, double angle, bool isPicked=false, QVector3D offset=QVector3D(0,0,0))
        : id(id), type(type), center(center), width(width), length(length), height(height), angle(angle), isPicked(isPicked), offset(offset) {}
};

#endif // OBJECTINFO_H
