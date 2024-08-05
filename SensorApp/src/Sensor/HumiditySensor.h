#ifndef HUMIDITY_SENSOR_H
#define HUMIDITY_SENSOR_H

#include "AbstractSensor.h"
#include "IConstVisitor.h"
#include "IVisitor.h"



class HumiditySensor : public AbstractSensor {

    private:
    float minHum;
    float maxHum;
    
  public:
    HumiditySensor(const QString& name = "", const QString& description = "", float accuracy = 0.0f, const QString& unit = "%", const QString& location = "", float minHum = 0.0f, float maxHum = 100.0f);
    virtual ~HumiditySensor() = default;

    float generateData() const override;
    float getMinValue() const;
    HumiditySensor& setMinValue(const float Min);
    float getMaxValue() const;
    HumiditySensor& setMaxValue(const float Min);

    virtual void accept(IConstVisitor& visitor) const override;
    virtual void accept(IVisitor& visitor) override;
};

#endif
