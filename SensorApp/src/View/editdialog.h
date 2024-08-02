#ifndef EDITDIALOG_H
#define EDITDIALOG_H

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

public:
    explicit EditDialog(QWidget *parent = nullptr);

private:
    QLineEdit *type_edit;
    QLineEdit *name_edit;
    QLineEdit *locat_edit;
    QComboBox *unit_comboBox;
    QLineEdit *accur_edit;
    QTextEdit *descr_edit;
    QPushButton *ok_button;
    QPushButton *cancel_button;
};

#endif // EDITDIALOG_H
