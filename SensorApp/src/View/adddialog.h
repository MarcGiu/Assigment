#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include <QComboBox>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>

class AddDialog : public QDialog
{
    Q_OBJECT

    private:
        QComboBox *type_comboBox;
        QLineEdit *name_edit;
        QLineEdit *locat_edit;
        QLineEdit *accur_edit;
        QTextEdit *descr_edit;
        QPushButton *ok_button;
        QPushButton *cancel_button;
        QGridLayout *gridLayout;

    private slots:
        void onSensorTypeChanged(const QString &sensorType);

    public:
        explicit AddDialog(QWidget *parent = nullptr);
        void onTypeChanged();
};

#endif // ADDDIALOG_H
