#ifndef CO2_SENSOR_H
#define CO2_SENSOR_H

#include "AbstractSensor.h"
#include "IConstVisitor.h"
#include "IVisitor.h"


class CO2Sensor : public AbstractSensor {

public:
    CO2Sensor(const QString& name = "", const QString& description = "", float accuracy = 0.0f, const QString& unit = "ppm", const QString& location = "");
    virtual ~CO2Sensor() = default;

    float generateData() const override;

    virtual void accept(IConstVisitor& visitor) const override;
    virtual void accept(IVisitor& visitor) override;
};


#endif
