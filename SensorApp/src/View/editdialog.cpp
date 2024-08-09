#include "editdialog.h"
#include "sensorfieldvisitor.h"
#include "sensorupdatevisitor.h"
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QComboBox>
#include <QGridLayout>

EditDialog::EditDialog(AbstractSensor *sensor, QWidget *parent) :
    QDialog(parent), sensor(sensor)
{
    this->setWindowTitle("Edit Sensor");
    this->resize(600, 400);

    gridLayout = new QGridLayout(this);

    QLabel *name_label = new QLabel("Name", this);
    gridLayout->addWidget(name_label, 0, 0);

    name_edit = new QLineEdit(this);
    name_edit->setText(sensor->getName());
    gridLayout->addWidget(name_edit, 0, 1, 1, 3);

    QLabel *locat_label = new QLabel("Location", this);
    gridLayout->addWidget(locat_label, 1, 0);

    locat_edit = new QLineEdit(this);
    locat_edit->setText(sensor->getLocation());
    gridLayout->addWidget(locat_edit, 1, 1, 1, 3);

    QLabel *accur_label = new QLabel("Accuracy", this);
    gridLayout->addWidget(accur_label, 2, 0);

    accur_edit = new QLineEdit(this);
    accur_edit->setText(QString::number(sensor->getAccuracy()));
    gridLayout->addWidget(accur_edit, 2, 1, 1, 3);

    QLabel *descr_label = new QLabel("Description", this);
    gridLayout->addWidget(descr_label, 3, 0);

    descr_edit = new QTextEdit(this);
    descr_edit->setText(sensor->getDescription());
    gridLayout->addWidget(descr_edit, 3, 1, 1, 3);

    unit_ComboBox = new QComboBox();
    minValue_edit = new QLineEdit();
    maxValue_edit = new QLineEdit();
    SensorFieldVisitor visitor(gridLayout, unit_ComboBox, minValue_edit, maxValue_edit);
    visitor.setStartRow(4);
    sensor->accept(visitor);

    QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout->addItem(horizontalSpacer, 7, 0, 1, 2);

    ok_button = new QPushButton("Ok", this);
    gridLayout->addWidget(ok_button, 7, 2);
    connect(ok_button, &QPushButton::clicked, this, &EditDialog::onOkButtonClicked);

    cancel_button = new QPushButton("Cancel", this);
    gridLayout->addWidget(cancel_button, 7, 3);
}

void EditDialog::setSensor (AbstractSensor *sensor){
    this->sensor = sensor;
}

void EditDialog::applyChanges() {
    qDebug() << "Applying changes to sensor";
    sensor->setName(name_edit->text());
    sensor->setDescription(descr_edit->toPlainText());
    sensor->setAccuracy(accur_edit->text().toFloat());
    sensor->setLocation(locat_edit->text());
    qDebug() << "Updating sensor with visitor";
    SensorUpdateVisitor updateVisitor(unit_ComboBox->currentText(), minValue_edit->text().toFloat(), maxValue_edit->text().toFloat());
    sensor->accept(updateVisitor);
    qDebug() << "Changes applied successfully";
}

void EditDialog::onOkButtonClicked() {
    applyChanges();
    accept();
}
