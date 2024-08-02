/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

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

class Ui_AddDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *type_label;
    QComboBox *type_comboBox;
    QLabel *name_label;
    QLineEdit *name_edit;
    QLabel *locat_label;
    QLineEdit *locat_edit;
    QLabel *unit_label;
    QComboBox *unit_comboBox;
    QLabel *accur_label;
    QLineEdit *accur_edit;
    QLabel *descr_label;
    QTextEdit *descr_edit;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *AddDialog)
    {
        if (AddDialog->objectName().isEmpty())
            AddDialog->setObjectName(QString::fromUtf8("AddDialog"));
        AddDialog->resize(536, 310);
        gridLayout = new QGridLayout(AddDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        type_label = new QLabel(AddDialog);
        type_label->setObjectName(QString::fromUtf8("type_label"));

        gridLayout->addWidget(type_label, 0, 0, 1, 1);

        type_comboBox = new QComboBox(AddDialog);
        type_comboBox->setObjectName(QString::fromUtf8("type_comboBox"));
        type_comboBox->setContextMenuPolicy(Qt::NoContextMenu);

        gridLayout->addWidget(type_comboBox, 0, 1, 1, 3);

        name_label = new QLabel(AddDialog);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        gridLayout->addWidget(name_label, 1, 0, 1, 1);

        name_edit = new QLineEdit(AddDialog);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));

        gridLayout->addWidget(name_edit, 1, 1, 1, 3);

        locat_label = new QLabel(AddDialog);
        locat_label->setObjectName(QString::fromUtf8("locat_label"));

        gridLayout->addWidget(locat_label, 2, 0, 1, 1);

        locat_edit = new QLineEdit(AddDialog);
        locat_edit->setObjectName(QString::fromUtf8("locat_edit"));

        gridLayout->addWidget(locat_edit, 2, 1, 1, 3);

        unit_label = new QLabel(AddDialog);
        unit_label->setObjectName(QString::fromUtf8("unit_label"));

        gridLayout->addWidget(unit_label, 3, 0, 1, 1);

        unit_comboBox = new QComboBox(AddDialog);
        unit_comboBox->setObjectName(QString::fromUtf8("unit_comboBox"));
        unit_comboBox->setContextMenuPolicy(Qt::NoContextMenu);

        gridLayout->addWidget(unit_comboBox, 3, 1, 1, 3);

        accur_label = new QLabel(AddDialog);
        accur_label->setObjectName(QString::fromUtf8("accur_label"));

        gridLayout->addWidget(accur_label, 4, 0, 1, 1);

        accur_edit = new QLineEdit(AddDialog);
        accur_edit->setObjectName(QString::fromUtf8("accur_edit"));

        gridLayout->addWidget(accur_edit, 4, 1, 1, 3);

        descr_label = new QLabel(AddDialog);
        descr_label->setObjectName(QString::fromUtf8("descr_label"));

        gridLayout->addWidget(descr_label, 5, 0, 1, 1);

        descr_edit = new QTextEdit(AddDialog);
        descr_edit->setObjectName(QString::fromUtf8("descr_edit"));

        gridLayout->addWidget(descr_edit, 5, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 2);

        ok_button = new QPushButton(AddDialog);
        ok_button->setObjectName(QString::fromUtf8("ok_button"));

        gridLayout->addWidget(ok_button, 6, 2, 1, 1);

        cancel_button = new QPushButton(AddDialog);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));

        gridLayout->addWidget(cancel_button, 6, 3, 1, 1);


        retranslateUi(AddDialog);

        QMetaObject::connectSlotsByName(AddDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDialog)
    {
        AddDialog->setWindowTitle(QCoreApplication::translate("AddDialog", "Dialog", nullptr));
        type_label->setText(QCoreApplication::translate("AddDialog", "Type", nullptr));
        name_label->setText(QCoreApplication::translate("AddDialog", "Name", nullptr));
        locat_label->setText(QCoreApplication::translate("AddDialog", "Location", nullptr));
        unit_label->setText(QCoreApplication::translate("AddDialog", "Unit of measurement", nullptr));
        accur_label->setText(QCoreApplication::translate("AddDialog", "Accuracy", nullptr));
        descr_label->setText(QCoreApplication::translate("AddDialog", "Description", nullptr));
        ok_button->setText(QCoreApplication::translate("AddDialog", "Ok", nullptr));
        cancel_button->setText(QCoreApplication::translate("AddDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDialog: public Ui_AddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
