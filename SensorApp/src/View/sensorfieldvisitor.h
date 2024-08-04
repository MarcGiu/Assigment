#ifndef SENSORFIELDVISITOR_H
#define SENSORFIELDVISITOR_H

#include "Sensor/IVisitor.h"
#include "Sensor/IConstVisitor.h"
#include <QGridLayout>

class SensorFieldVisitor : public IVisitor {
private:
    QGridLayout* layout;
    int startRow;

public:
    SensorFieldVisitor(QGridLayout* layout) : layout(layout), startRow(0) {}
    void setStartRow(int row) { startRow = row; }

    virtual void visitTemperature(TemperatureSensor& temperature_sensor);
    virtual void visitHumidity(HumiditySensor& humidity_sensor);
    virtual void visitCO2(CO2Sensor& co2_sensor);
};

#endif // SENSORFIELDVISITOR_H
