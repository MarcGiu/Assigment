#include "CO2Sensor.h"
#include "IConstVisitor.h"
#include "IVisitor.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>


CO2Sensor::CO2Sensor(const QString& name, const QString& description, float accuracy, const QString& unit, const QString& location)
    : AbstractSensor(name.isEmpty() ? QString("CO2Sensor%1").arg(getId()) : name, description, accuracy, unit, location) {
    // Inizializza il generatore di numeri casuali con il tempo attuale
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

float CO2Sensor::generateData() const {
    // Genera un valore casuale tra 0 e 2000 ppm di monossido di carbonio
    float co2Lv = static_cast<float>(std::rand()) / (static_cast<float>(RAND_MAX / 2000.0f));

    // Considera l'accuratezza del sensore
    float accuracyFactor = 1.0f - (getAccuracy() / 100.0f);
    co2Lv *= accuracyFactor;

    // Assicura che il livello di CO2 sia compreso tra 0 e 2000 ppm
    co2Lv = std::max(0.0f, std::min(2000.0f, co2Lv));

    return co2Lv;
}

void CO2Sensor::accept(IConstVisitor& visitor) const {
    visitor.visit(*this);
}

void CO2Sensor::accept(IVisitor& visitor) {
    visitor.visit(*this);
}
