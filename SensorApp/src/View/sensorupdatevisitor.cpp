#include "sensorupdatevisitor.h"
#include "Sensor/HumiditySensor.h"
#include "Sensor/TemperatureSensor.h"
#include "Sensor/CO2Sensor.h"

SensorUpdateVisitor::SensorUpdateVisitor(const QString& unit, float minValue, float maxValue)
    : newUnit(unit), newMinValue(minValue), newMaxValue(maxValue) {}

void SensorUpdateVisitor::visitTemperature(TemperatureSensor& sensor) {
    sensor.setUnit(newUnit);
}

void SensorUpdateVisitor::visitHumidity(HumiditySensor& sensor) {
    sensor.setUnit(newUnit);
    sensor.setMinValue(newMinValue);
    sensor.setMaxValue(newMaxValue);
}

void SensorUpdateVisitor::visitCO2(CO2Sensor& sensor) {
    sensor.setUnit(newUnit);
}
