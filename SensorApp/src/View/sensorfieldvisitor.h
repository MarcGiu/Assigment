#ifndef SENSORFIELDVISITOR_H
#define SENSORFIELDVISITOR_H

#include "Sensor/IVisitor.h"
#include <QGridLayout>
#include <QComboBox>
#include <QLineEdit>

class SensorFieldVisitor : public IVisitor {
    private:
        QGridLayout* layout;
        int startRow;
        QComboBox* unitComboBox;
        QLineEdit* minEdit;
        QLineEdit* maxEdit;

    public:
        SensorFieldVisitor(QGridLayout* layout, QComboBox* unitComboBox = nullptr, QLineEdit* minEdit = nullptr, QLineEdit* maxEdit = nullptr);
        void setStartRow(int row) { startRow = row; }

        void visitTemperature(TemperatureSensor& temperature_sensor) override;
        void visitHumidity(HumiditySensor& humidity_sensor) override;
        void visitCO2(CO2Sensor& co2_sensor) override;
};

#endif // SENSORFIELDVISITOR_H
