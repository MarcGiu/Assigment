#ifndef ABSTRACT_SENSOR_H
#define ABSTRACT_SENSOR_H

#include "IConstVisitor.h"
#include "IVisitor.h"
#include "SensorObserver.h"
#include <iostream>
#include <QString>
#include <QVector>
#include <vector>
#include <atomic>


class AbstractSensor {
  private:
    const unsigned int id;
    QString name;
    QString description;
    float accuracy;
    QString unitOfMeasurement;
    QString location;
    QVector<float> dataHistory;

  protected:
    QVector<SensorObserver*> observers;

  public:
    AbstractSensor(const QString& name = "", const QString& description = "", 
                   const float accuracy = 0.0, const QString& unit = "", const QString& location = "");
    virtual ~AbstractSensor();

    unsigned int getId() const;
    static unsigned int generateId();
    const QString& getName() const;
    AbstractSensor& setName(const QString& name);
    const QString& getDescription() const;
    AbstractSensor& setDescription(const QString& description);
    float getAccuracy() const;
    AbstractSensor& setAccuracy(const float accuracy);
    const QString& getUnit() const;
    AbstractSensor& setUnit(const QString& unit);
    const QString& getLocation() const;
    AbstractSensor& setLocation(const QString& location);

    const QVector<float>& getDataHistory() const;
    virtual float generateData() const = 0;
    void addDataPoint(float data);
    void fillDataHistory(int numberOfData);

    virtual void accept(IConstVisitor& visitor) const = 0;
    virtual void accept(IVisitor& visitor) = 0;
    void notifyObservers() const;
    void registerObserver(SensorObserver* observer);

};

#endif
