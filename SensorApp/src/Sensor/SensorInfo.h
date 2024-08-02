#ifndef SENSORINFO_H
#define SENSORINFO_H

#include <QString>

struct SensorInfo {
    QString type;
    QString name;
    QString location;
    QString unit;
    float accuracy;
    QString description;
};

#endif
