#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

#include "AbstractSensor.h"
#include "IConstVisitor.h"
#include "IVisitor.h"

class TemperatureSensor: public AbstractSensor {
  
  public:
    TemperatureSensor(const QString& name = "", const QString& description = "", float accuracy = 0.0f, const QString& unit = "°C", const QString& location = "");
    virtual ~TemperatureSensor() = default;
    float generateData() const override;
    void accept(IConstVisitor& visitor) const override;
    void accept(IVisitor& visitor) override;
};

#endif
