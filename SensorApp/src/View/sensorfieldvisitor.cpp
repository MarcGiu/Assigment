#include "sensorfieldvisitor.h"
#include <QLineEdit>
#include <QLabel>
#include <QComboBox>

void SensorFieldVisitor::visitCO2(CO2Sensor& sensor) {
    QLabel* unitLabel = new QLabel("Unit");
    QComboBox* unitComboBox = new QComboBox();
    unitComboBox->addItems({"ppm"});
    layout->addWidget(unitLabel, startRow, 0);
    layout->addWidget(unitComboBox, startRow, 1, 1, 3);
}

void SensorFieldVisitor::visitHumidity(HumiditySensor& sensor) {
    QLabel* unitLabel = new QLabel("Unit");
    QComboBox* unitComboBox = new QComboBox();
    unitComboBox->addItems({"%"});
    layout->addWidget(unitLabel, startRow, 0);
    layout->addWidget(unitComboBox, startRow, 1, 1, 3);

    QLabel* minLabel = new QLabel("Min value");
    QLineEdit* minEdit = new QLineEdit();
    QLabel* maxLabel = new QLabel("Max value");
    QLineEdit* maxEdit = new QLineEdit();
    layout->addWidget(minLabel, startRow + 1, 0);
    layout->addWidget(minEdit, startRow + 1, 1, 1, 3);
    layout->addWidget(maxLabel, startRow + 2, 0);
    layout->addWidget(maxEdit, startRow + 2, 1, 1, 3);
}

void SensorFieldVisitor::visitTemperature(TemperatureSensor& sensor) {
    QLabel* unitLabel = new QLabel("Unit");
    QComboBox* unitComboBox = new QComboBox();
    unitComboBox->addItems({"°C", "°F", "K"});
    layout->addWidget(unitLabel, startRow, 0);
    layout->addWidget(unitComboBox, startRow, 1, 1, 3);
}

