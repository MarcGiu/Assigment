#ifndef SENSORDETAILVISITOR_H
#define SENSORDETAILVISITOR_H

#include "Sensor/AbstractSensor.h"
#include "Sensor/IConstVisitor.h"
#include <QGridLayout>
#include <QWidget>

class SensorDetailVisitor : public IConstVisitor {
    private:
        QGridLayout *layout;
        QWidget *itemWidget;

    public:
        SensorDetailVisitor(QGridLayout* layout, QWidget* itemWidget);

        void visitCO2(const CO2Sensor& sensor) override;
        void visitHumidity(const HumiditySensor& sensor) override;
        void visitTemperature(const TemperatureSensor& sensor) override;
};

#endif // SENSORDETAILVISITOR_H
