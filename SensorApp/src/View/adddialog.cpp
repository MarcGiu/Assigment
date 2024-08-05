#include "adddialog.h"
#include "sensorfieldvisitor.h"
#include "Sensor/CO2Sensor.h"
#include "Sensor/HumiditySensor.h"
#include "Sensor/TemperatureSensor.h"

AddDialog::AddDialog(QWidget *parent) :
    QDialog(parent)
{
    this->setWindowTitle("Add Sensor");
    this->resize(600, 400);

    gridLayout = new QGridLayout(this);

    QLabel *type_label = new QLabel("Type", this);
    gridLayout->addWidget(type_label, 0, 0);

    type_comboBox = new QComboBox(this);
    type_comboBox->addItems({"","CO2", "Humidity", "Temperature"});
    gridLayout->addWidget(type_comboBox, 0, 1, 1, 3);
    connect(type_comboBox, &QComboBox::currentTextChanged, this, &AddDialog::onSensorTypeChanged);

    QLabel *name_label = new QLabel("Name", this);
    gridLayout->addWidget(name_label, 1, 0);

    name_edit = new QLineEdit(this);
    gridLayout->addWidget(name_edit, 1, 1, 1, 3);

    QLabel *locat_label = new QLabel("Location", this);
    gridLayout->addWidget(locat_label, 2, 0);

    locat_edit = new QLineEdit(this);
    gridLayout->addWidget(locat_edit, 2, 1, 1, 3);

    QLabel *accur_label = new QLabel("Accuracy", this);
    gridLayout->addWidget(accur_label, 3, 0);

    accur_edit = new QLineEdit(this);
    gridLayout->addWidget(accur_edit, 3, 1, 1, 3);

    QLabel *descr_label = new QLabel("Description", this);
    gridLayout->addWidget(descr_label, 4, 0);

    descr_edit = new QTextEdit(this);
    gridLayout->addWidget(descr_edit, 4, 1, 1, 3);

    QSpacerItem *horizontalSpacer = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout->addItem(horizontalSpacer, 6, 0, 1, 2);

    ok_button = new QPushButton("Ok", this);
    gridLayout->addWidget(ok_button, 8, 2);
    ok_button->setEnabled(false);

    cancel_button = new QPushButton("Cancel", this);
    gridLayout->addWidget(cancel_button, 8, 3);

    connect(type_comboBox, &QComboBox::currentTextChanged, this, &AddDialog::onTypeChanged);
}

void AddDialog::onSensorTypeChanged(const QString &sensorType) {
    // Clear the fields of the previously selected type
    while (gridLayout->count() > 13) {
        QLayoutItem *item = gridLayout->takeAt(13);
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }

    if (sensorType != ""){
        // Create a new sensor of the type selected
        std::unique_ptr<AbstractSensor> sensor;
        if (sensorType == "CO2") {
            sensor = std::make_unique<CO2Sensor>();
        } else if (sensorType == "Humidity") {
            sensor = std::make_unique<HumiditySensor>();
        } else if (sensorType == "Temperature") {
            sensor = std::make_unique<TemperatureSensor>();
        }

        SensorFieldVisitor visitor(gridLayout);
        visitor.setStartRow(5);
        sensor->accept(visitor);
    }
}

void AddDialog::onTypeChanged() {
    ok_button->setEnabled(!type_comboBox->currentText().isEmpty());
}
