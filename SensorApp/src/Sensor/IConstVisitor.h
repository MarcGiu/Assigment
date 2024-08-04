#ifndef SENSOR_I_CONST_VISITOR_H
#define SENSOR_I_CONST_VISITOR_H

class TemperatureSensor;
class HumiditySensor;
class CO2Sensor;

class IConstVisitor {
  public:
    virtual ~IConstVisitor() = default;
    virtual void visitTemperature(const TemperatureSensor& temperature_sensor) = 0;
    virtual void visitHumidity(const HumiditySensor& humidity_sensor) = 0;
    virtual void visitCO2(const CO2Sensor& co2_sensor) = 0;
};

#endif
