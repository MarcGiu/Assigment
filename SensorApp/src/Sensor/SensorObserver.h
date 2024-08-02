#ifndef SENSOROBSERVER_H
#define SENSOROBSERVER_H

class AbstractSensor;

class SensorObserver {
  public:
    virtual ~SensorObserver() = default;
    virtual void update() = 0;
    virtual void notify(AbstractSensor& sensor) = 0;
};


#endif
