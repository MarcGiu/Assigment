#include "sensordetailvisitor.h"
#include "Sensor/CO2Sensor.h"
#include "Sensor/HumiditySensor.h"
#include "Sensor/TemperatureSensor.h"
#include <QIcon>
#include <QString>
#include <QLabel>

void SensorDetailVisitor::visitCO2(const CO2Sensor& sensor) {
    itemWidget->setStyleSheet("background-color: #D3D3D3");
    QLabel *iconLabel = new QLabel();
    QPixmap iconPixmap(":/img/Assets/co2.png");
    iconPixmap = iconPixmap.scaled(70, 70, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    iconLabel->setAlignment(Qt::AlignCenter);
    iconLabel->setPixmap(iconPixmap);
    layout->addWidget(iconLabel, 0, 0, 4, 4);
}

void SensorDetailVisitor::visitHumidity(const HumiditySensor& sensor) {
    itemWidget->setStyleSheet("background-color: #ADD8E6");
    QLabel *iconLabel = new QLabel();
    QPixmap iconPixmap(":/img/Assets/humidity.png");
    iconPixmap = iconPixmap.scaled(70, 70, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    iconLabel->setAlignment(Qt::AlignCenter);
    iconLabel->setPixmap(iconPixmap);
    layout->addWidget(iconLabel, 0, 0, 5, 4);
    QLabel* minmaxLabel = new QLabel(QString("Min: %1  Max: %2").arg(sensor.getMinValue()).arg(sensor.getMaxValue()));
    layout->addWidget(minmaxLabel, 4, 4);
}

void SensorDetailVisitor::visitTemperature(const TemperatureSensor& sensor) {
    itemWidget->setStyleSheet("background-color: #FFA07A");
    QLabel *iconLabel = new QLabel();
    QPixmap iconPixmap(":/img/Assets/temperature.png");
    iconPixmap = iconPixmap.scaled(70, 70, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    iconLabel->setAlignment(Qt::AlignCenter);
    iconLabel->setPixmap(iconPixmap);
    layout->addWidget(iconLabel, 0, 0, 4, 4);
}
