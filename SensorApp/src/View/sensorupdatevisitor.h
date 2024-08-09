#ifndef SENSORUPDATEVISITOR_H
#define SENSORUPDATEVISITOR_H

#include "Sensor/IVisitor.h"
#include <QString>


class SensorUpdateVisitor : public IVisitor{
    private:
        QString newUnit;
        float newMinValue;
        float newMaxValue;

    public:
        SensorUpdateVisitor(const QString& unit, float minValue, float maxValue);

        void visitTemperature(TemperatureSensor& sensor) override;
        void visitHumidity(HumiditySensor& sensor) override;
        void visitCO2(CO2Sensor& sensor) override;
};

#endif // SENSORUPDATEVISITOR_H
