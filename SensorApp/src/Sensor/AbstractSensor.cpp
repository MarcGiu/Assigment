#include "AbstractSensor.h"
#include "SensorObserver.h"
#include <iostream>
#include <QString>
#include <QAtomicInteger>

static QAtomicInteger<unsigned int> idCounter(0);

AbstractSensor::AbstractSensor(const QString& name, const QString& description, 
                               const float accuracy, const QString& unit, const QString& location)
    : id(generateId()), name(name), description(description), accuracy(accuracy), unitOfMeasurement(unit), location(location){}

AbstractSensor::~AbstractSensor() {}

unsigned int AbstractSensor::generateId() {
    return idCounter.fetchAndAddRelaxed(1);
}

unsigned int AbstractSensor::getId() const {
    return id;
}

const QString& AbstractSensor::getName() const {
    return name;
}

AbstractSensor& AbstractSensor::setName(const QString& name) {
    this->name = name;
    return *this;
}

const QString& AbstractSensor::getDescription() const {
    return description;
}

AbstractSensor& AbstractSensor::setDescription(const QString& description) {
    this->description = description;
    return *this;
}

float AbstractSensor::getAccuracy() const {
    return accuracy;
}

AbstractSensor& AbstractSensor::setAccuracy(const float accuracy) {
    if (accuracy < 0.0) {
        throw std::invalid_argument("Accuracy cannot be negative.");
    }
    this->accuracy = accuracy;
    return *this;
}

const QString& AbstractSensor::getUnit() const {
    return unitOfMeasurement;
}

AbstractSensor& AbstractSensor::setUnit(const QString& unit){
    this->unitOfMeasurement = unit;
    return *this;
}

const QString& AbstractSensor::getLocation() const {
    return location;
}

AbstractSensor& AbstractSensor::setLocation(const QString& location){
    this->location = location;
    return *this;
}

const QVector<float>& AbstractSensor::getDataHistory() const {
    return dataHistory;
}

void AbstractSensor::addDataPoint(float data) {
    dataHistory.push_back(data);
    notifyObservers();
}

void AbstractSensor::fillDataHistory(int numberOfDataPoints) {
    for (int i = 0; i < numberOfDataPoints; ++i) {
        float data = generateData();
        addDataPoint(data);
    }
}

void AbstractSensor::registerObserver(SensorObserver* observer) {
    if (observer != nullptr) {
        observers.push_back(observer);
    }
}

void AbstractSensor::notifyObservers() const {
    for (SensorObserver* observer : observers) {
        if (observer != nullptr) {
            observer->update();
        }
    }
}
