#include "TemperatureSensor.h"
#include "IConstVisitor.h"
#include "IVisitor.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>

TemperatureSensor::TemperatureSensor(const QString& name, const QString& description, float accuracy, const QString& unit, const QString& location)
    : AbstractSensor(name.isEmpty() ? QString("TemSensor%1").arg(getId()) : name, description, accuracy, unit, location) {
    // Inizializza il generatore di numeri casuali
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}


float TemperatureSensor::generateData() const {
    // Genera un valore casuale tra 15 e 35 gradi Celsius
    float temperature = 15.0f + static_cast<float>(std::rand()) / (static_cast<float>(RAND_MAX / (35.0f - 15.0f)));

    // Considera l'accuratezza del sensore
    float accuracyFactor = 1.0f - (getAccuracy() / 100.0f);
    temperature *= accuracyFactor;

    // Assicura che la temperatura sia compresa nei limiti 
    temperature = std::max(20.0f, std::min(30.0f, temperature));

    if (getUnit() == "°F") {
        //conversione in gradi Fahrenheit
        temperature = (temperature * 9 / 5) + 32;
    }

    if (getUnit() == "K") {
        //conversione in Kelvin
        temperature = temperature + 273.15;
    }
     
    return temperature;
}

void TemperatureSensor::accept(IConstVisitor& visitor) const {
    visitor.visit(*this);
}

void TemperatureSensor::accept(IVisitor& visitor) {
    visitor.visit(*this);
}
