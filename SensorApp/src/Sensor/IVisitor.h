#ifndef SENSOR_I_VISITOR_H
#define SENSOR_I_VISITOR_H

class TemperatureSensor;
class HumiditySensor;
class CO2Sensor;

class IVisitor {
  public:
    virtual ~IVisitor() {};
    virtual void visit(TemperatureSensor& temperature_sensor) = 0;
    virtual void visit(HumiditySensor& humidity_sensor) = 0;
    virtual void visit(CO2Sensor& co2_sensor) = 0;
};

#endif
