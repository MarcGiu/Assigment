#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>

namespace Ui {
class AddDialog;
}

class AddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddDialog(QWidget *parent = nullptr);
    ~AddDialog();
    QString getSensorType() const;
    QString getSensorName() const;
    QString getSensorLocation() const;
    QString getSensorUnit() const;
    float getSensorAccuracy() const;
    QString getSensorDescription() const;

private:
    Ui::AddDialog *ui;
};

#endif // ADDDIALOG_H
