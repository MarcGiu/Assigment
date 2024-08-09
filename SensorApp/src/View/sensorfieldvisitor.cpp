#include "sensorfieldvisitor.h"
#include "Sensor/HumiditySensor.h"
#include "Sensor/TemperatureSensor.h"
#include "Sensor/CO2Sensor.h"
#include <QLineEdit>
#include <QLabel>
#include <QComboBox>

SensorFieldVisitor::SensorFieldVisitor(QGridLayout* layout, QComboBox* unitComboBox, QLineEdit* minEdit, QLineEdit* maxEdit)
    : layout(layout), startRow(0), unitComboBox(unitComboBox), minEdit(minEdit), maxEdit(maxEdit) {}

void SensorFieldVisitor::visitCO2(CO2Sensor& sensor) {

    QLabel* unitLabel = new QLabel("Unit");
    unitComboBox->addItems({"ppm"});
    unitComboBox->setCurrentIndex(unitComboBox->findText((sensor.getUnit())));
    layout->addWidget(unitLabel, startRow, 0);
    layout->addWidget(unitComboBox, startRow, 1, 1, 3);
}

void SensorFieldVisitor::visitHumidity(HumiditySensor& sensor) {

    QLabel* unitLabel = new QLabel("Unit");
    unitComboBox->addItems({"%"});
    unitComboBox->setCurrentIndex(unitComboBox->findText((sensor.getUnit())));
    layout->addWidget(unitLabel, startRow, 0);
    layout->addWidget(unitComboBox, startRow, 1, 1, 3);

    QLabel* minLabel = new QLabel("Min value");
    minEdit->setText(QString::number(sensor.getMinValue()));
    QLabel* maxLabel = new QLabel("Max value");
    maxEdit->setText(QString::number(sensor.getMaxValue()));
    layout->addWidget(minLabel, startRow + 1, 0);
    layout->addWidget(minEdit, startRow + 1, 1, 1, 3);
    layout->addWidget(maxLabel, startRow + 2, 0);
    layout->addWidget(maxEdit, startRow + 2, 1, 1, 3);
}

void SensorFieldVisitor::visitTemperature(TemperatureSensor& sensor) {

    QLabel* unitLabel = new QLabel("Unit");
    unitComboBox->addItems({"°C", "°F", "K"});
    unitComboBox->setCurrentIndex(unitComboBox->findText((sensor.getUnit())));
    layout->addWidget(unitLabel, startRow, 0);
    layout->addWidget(unitComboBox, startRow, 1, 1, 3);
}

