#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include "sensorfieldvisitor.h"
#include "Sensor/AbstractSensor.h"
#include <QDialog>
#include <QComboBox>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>

class EditDialog : public QDialog
{
    Q_OBJECT

    private:
        AbstractSensor *sensor;
        QLineEdit *name_edit;
        QLineEdit *locat_edit;
        QLineEdit *accur_edit;
        QTextEdit *descr_edit;
        QComboBox* unit_ComboBox;
        QLineEdit* minValue_edit;
        QLineEdit* maxValue_edit;
        QPushButton *ok_button;
        QPushButton *cancel_button;
        QGridLayout *gridLayout;

    public:
        EditDialog(AbstractSensor *sensor, QWidget *parent = nullptr);
        void setSensor (AbstractSensor *sensor);
        void applyChanges();
        void onOkButtonClicked();
};

#endif // EDITDIALOG_H
