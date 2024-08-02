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

public:
    explicit AddDialog(QWidget *parent = nullptr);

private:
    QComboBox *type_comboBox;
    QLineEdit *name_edit;
    QLineEdit *locat_edit;
    QComboBox *unit_comboBox;
    QLineEdit *accur_edit;
    QTextEdit *descr_edit;
    QPushButton *ok_button;
    QPushButton *cancel_button;
};

#endif // ADDDIALOG_H
