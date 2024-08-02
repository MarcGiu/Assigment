#ifndef SENSOR_I_CONST_VISITOR_H
#define SENSOR_I_CONST_VISITOR_H

class TemperatureSensor;
class HumiditySensor;
class CO2Sensor;

class IConstVisitor {
  public:
    virtual ~IConstVisitor() {};
    virtual void visit(const TemperatureSensor& temperature_sensor) = 0;
    virtual void visit(const HumiditySensor& humidity_sensor) = 0;
    virtual void visit(const CO2Sensor& co2_sensor) = 0;
};

#endif
