#include "editdialog.h"
#include "ui_editdialog.h"

EditDialog::EditDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditDialog)
{
    ui->setupUi(this);
}

EditDialog::~EditDialog()
{
    delete ui;
}

void EditDialog::setSensorInfo(const SensorInfo &sensor) {
    setSensorType(sensor.type);
    ui->name_edit->setText(sensor.name);
    ui->locat_edit->setText(sensor.location);
    ui->unit_comboBox->setCurrentText(sensor.unit);
    ui->accur_edit->setText(QString::number(sensor.accuracy));
    ui->descr_edit->setPlainText(sensor.description);
}

void EditDialog::setSensorType(const QString& type) {
    ui->type_edit->setText(type);
    ui->type_edit->setReadOnly(true);
}

QString EditDialog::getSensorName() const {
    return ui->name_edit->text();
}

QString EditDialog::getSensorLocation() const {
    return ui->locat_edit->text();
}

QString EditDialog::getSensorUnit() const {
    return ui->unit_comboBox->currentText();
}

float EditDialog::getSensorAccuracy() const {
    return ui->accur_edit->text().toFloat();
}

QString EditDialog::getSensorDescription() const {
    return ui->descr_edit->toPlainText();
}

void EditDialog::on_ok_button_clicked() {
    accept();
}

void EditDialog::on_cancel_button_clicked() {
    reject();
}
