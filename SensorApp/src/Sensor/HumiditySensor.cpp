#include "HumiditySensor.h"
#include "IConstVisitor.h"
#include "IVisitor.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>

HumiditySensor::HumiditySensor(const QString& name, const QString& description, float accuracy, const QString& unit, const QString& location, float minHum, float maxHum)
    : AbstractSensor(name.isEmpty() ? QString("HumSensor%1").arg(getId()) : name, description, accuracy, unit, location),
      minHum(std::max(0.0f, minHum)),
      maxHum(std::min(100.0f, maxHum)) {
    // Inizializza il generatore di numeri casuali con il tempo attuale
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

float HumiditySensor::getMinValue() const {
    return minHum;
}

HumiditySensor& HumiditySensor::setMinValue(const float min) {
    if (min < 0.0) {
        this->minHum = 0;
    }
    this->minHum = min;
    return *this;
}


float HumiditySensor::getMaxValue() const {
    return maxHum;
}

HumiditySensor& HumiditySensor::setMaxValue(const float max) {
    if (max > 100.0) {
        this->maxHum = 100;
    }
    this->maxHum = max;
    return *this;
}


float HumiditySensor::generateData() const {
    // Genera un valore casuale tra minHum e maxHum percentuale di umidità
    float humidity = minHum + static_cast<float>(std::rand()) / (static_cast<float>(RAND_MAX / (maxHum-minHum)));

    // Considera l'accuratezza del sensore
    float accuracyFactor = 1.0f - (getAccuracy() / 100.0f);
    humidity *= accuracyFactor;

    // Assicura che l'umidità sia compresa tra minHum e 100
    humidity = std::max(minHum, std::min(maxHum, humidity));

    return humidity;
}

void HumiditySensor::accept(IConstVisitor& visitor) const {
    visitor.visitHumidity(*this);
}

void HumiditySensor::accept(IVisitor& visitor) {
    visitor.visitHumidity(*this);
}

