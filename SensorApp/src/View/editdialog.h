#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include <QDialog>
#include "Sensor/SensorInfo.h"

namespace Ui {
class EditDialog;
}

class EditDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditDialog(QWidget *parent = nullptr);
    ~EditDialog();
    void setSensorInfo(const SensorInfo &sensor);
    void setSensorType(const QString& type);
    QString getSensorName() const;
    QString getSensorLocation() const;
    QString getSensorUnit() const;
    float getSensorAccuracy() const;
    QString getSensorDescription() const;

private slots:
    void on_ok_button_clicked();
    void on_cancel_button_clicked();

private:
    Ui::EditDialog *ui;
};

#endif // EDITDIALOG_H
