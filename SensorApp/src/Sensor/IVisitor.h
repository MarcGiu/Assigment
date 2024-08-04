#ifndef SENSOR_I_VISITOR_H
#define SENSOR_I_VISITOR_H

class TemperatureSensor;
class HumiditySensor;
class CO2Sensor;

class IVisitor {
  public:
    virtual ~IVisitor() = default;
    virtual void visitTemperature(TemperatureSensor& temperature_sensor) = 0;
    virtual void visitHumidity(HumiditySensor& humidity_sensor) = 0;
    virtual void visitCO2(CO2Sensor& co2_sensor) = 0;
};

#endif
