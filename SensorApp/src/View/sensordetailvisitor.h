#ifndef SENSORDETAILVISITOR_H
#define SENSORDETAILVISITOR_H

#include "Sensor/AbstractSensor.h"
#include "Sensor/IConstVisitor.h"
#include <QGridLayout>

class SensorDetailVisitor : public IConstVisitor {

private:
    QGridLayout* layout;
    QWidget* itemWidget;

public:
    SensorDetailVisitor(QGridLayout* layout, QWidget* itemWidget) : layout(layout), itemWidget(itemWidget) {};
    void visitCO2(const CO2Sensor& sensor) override;
    void visitHumidity(const HumiditySensor& sensor) override;
    void visitTemperature(const TemperatureSensor& sensor) override;

};

#endif // SENSORDETAILVISITOR_H
