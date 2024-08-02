/********************************************************************************
** Form generated from reading UI file 'editdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_EditDialog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *descr_edit;
    QLineEdit *name_edit;
    QLabel *unit_label;
    QLabel *descr_label;
    QPushButton *ok_button;
    QPushButton *cancel_button;
    QLabel *accur_label;
    QLineEdit *locat_edit;
    QLineEdit *accur_edit;
    QComboBox *unit_comboBox;
    QLabel *name_label;
    QLabel *type_label;
    QSpacerItem *horizontalSpacer;
    QLabel *locat_label;
    QLineEdit *type_edit;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName(QString::fromUtf8("EditDialog"));
        EditDialog->resize(544, 360);
        gridLayout = new QGridLayout(EditDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        descr_edit = new QTextEdit(EditDialog);
        descr_edit->setObjectName(QString::fromUtf8("descr_edit"));

        gridLayout->addWidget(descr_edit, 5, 1, 1, 3);

        name_edit = new QLineEdit(EditDialog);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));

        gridLayout->addWidget(name_edit, 1, 1, 1, 3);

        unit_label = new QLabel(EditDialog);
        unit_label->setObjectName(QString::fromUtf8("unit_label"));

        gridLayout->addWidget(unit_label, 3, 0, 1, 1);

        descr_label = new QLabel(EditDialog);
        descr_label->setObjectName(QString::fromUtf8("descr_label"));

        gridLayout->addWidget(descr_label, 5, 0, 1, 1);

        ok_button = new QPushButton(EditDialog);
        ok_button->setObjectName(QString::fromUtf8("ok_button"));

        gridLayout->addWidget(ok_button, 6, 2, 1, 1);

        cancel_button = new QPushButton(EditDialog);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));

        gridLayout->addWidget(cancel_button, 6, 3, 1, 1);

        accur_label = new QLabel(EditDialog);
        accur_label->setObjectName(QString::fromUtf8("accur_label"));

        gridLayout->addWidget(accur_label, 4, 0, 1, 1);

        locat_edit = new QLineEdit(EditDialog);
        locat_edit->setObjectName(QString::fromUtf8("locat_edit"));

        gridLayout->addWidget(locat_edit, 2, 1, 1, 3);

        accur_edit = new QLineEdit(EditDialog);
        accur_edit->setObjectName(QString::fromUtf8("accur_edit"));

        gridLayout->addWidget(accur_edit, 4, 1, 1, 3);

        unit_comboBox = new QComboBox(EditDialog);
        unit_comboBox->setObjectName(QString::fromUtf8("unit_comboBox"));
        unit_comboBox->setContextMenuPolicy(Qt::NoContextMenu);

        gridLayout->addWidget(unit_comboBox, 3, 1, 1, 3);

        name_label = new QLabel(EditDialog);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        gridLayout->addWidget(name_label, 1, 0, 1, 1);

        type_label = new QLabel(EditDialog);
        type_label->setObjectName(QString::fromUtf8("type_label"));

        gridLayout->addWidget(type_label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 2);

        locat_label = new QLabel(EditDialog);
        locat_label->setObjectName(QString::fromUtf8("locat_label"));

        gridLayout->addWidget(locat_label, 2, 0, 1, 1);

        type_edit = new QLineEdit(EditDialog);
        type_edit->setObjectName(QString::fromUtf8("type_edit"));

        gridLayout->addWidget(type_edit, 0, 1, 1, 3);

        QWidget::setTabOrder(name_edit, locat_edit);
        QWidget::setTabOrder(locat_edit, unit_comboBox);
        QWidget::setTabOrder(unit_comboBox, accur_edit);
        QWidget::setTabOrder(accur_edit, descr_edit);
        QWidget::setTabOrder(descr_edit, ok_button);
        QWidget::setTabOrder(ok_button, cancel_button);

        retranslateUi(EditDialog);

        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QCoreApplication::translate("EditDialog", "Dialog", nullptr));
        unit_label->setText(QCoreApplication::translate("EditDialog", "Unit of measurement", nullptr));
        descr_label->setText(QCoreApplication::translate("EditDialog", "Description", nullptr));
        ok_button->setText(QCoreApplication::translate("EditDialog", "Ok", nullptr));
        cancel_button->setText(QCoreApplication::translate("EditDialog", "Cancel", nullptr));
        accur_label->setText(QCoreApplication::translate("EditDialog", "Accuracy", nullptr));
        name_label->setText(QCoreApplication::translate("EditDialog", "Name", nullptr));
        type_label->setText(QCoreApplication::translate("EditDialog", "Type", nullptr));
        locat_label->setText(QCoreApplication::translate("EditDialog", "Location", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
