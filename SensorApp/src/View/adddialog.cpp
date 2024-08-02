#include "adddialog.h"
#include "ui_adddialog.h"

AddDialog::AddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDialog)
{
    ui->setupUi(this);
}

AddDialog::~AddDialog()
{
    delete ui;
}

QString AddDialog::getSensorType() const
{
    return ui->type_comboBox->currentText();
}

QString AddDialog::getSensorName() const
{
    return ui->name_edit->text();
}

QString AddDialog::getSensorLocation() const
{
    return ui->locat_edit->text();
}

QString AddDialog::getSensorUnit() const
{
    return ui->unit_comboBox->currentText();
}

float AddDialog::getSensorAccuracy() const
{
    return ui->accur_edit->text().toFloat();
}

QString AddDialog::getSensorDescription() const
{
    return ui->descr_edit->toPlainText();
}
