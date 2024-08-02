#include "EditDialog.h"

EditDialog::EditDialog(QWidget *parent) :
    QDialog(parent)
{
    this->setWindowTitle("Dialog");
    this->resize(544, 360);

    QGridLayout *gridLayout = new QGridLayout(this);

    QLabel *type_label = new QLabel("Type", this);
    gridLayout->addWidget(type_label, 0, 0);

    type_edit = new QLineEdit(this);
    gridLayout->addWidget(type_edit, 0, 1, 1, 3);

    QLabel *name_label = new QLabel("Name", this);
    gridLayout->addWidget(name_label, 1, 0);

    name_edit = new QLineEdit(this);
    gridLayout->addWidget(name_edit, 1, 1, 1, 3);

    QLabel *locat_label = new QLabel("Location", this);
    gridLayout->addWidget(locat_label, 2, 0);

    locat_edit = new QLineEdit(this);
    gridLayout->addWidget(locat_edit, 2, 1, 1, 3);

    QLabel *unit_label = new QLabel("Unit of measurement", this);
    gridLayout->addWidget(unit_label, 3, 0);

    unit_comboBox = new QComboBox(this);
    unit_comboBox->setContextMenuPolicy(Qt::NoContextMenu);
    gridLayout->addWidget(unit_comboBox, 3, 1, 1, 3);

    QLabel *accur_label = new QLabel("Accuracy", this);
    gridLayout->addWidget(accur_label, 4, 0);

    accur_edit = new QLineEdit(this);
    gridLayout->addWidget(accur_edit, 4, 1, 1, 3);

    QLabel *descr_label = new QLabel("Description", this);
    gridLayout->addWidget(descr_label, 5, 0);

    descr_edit = new QTextEdit(this);
    gridLayout->addWidget(descr_edit, 5, 1, 1, 3);

    QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout->addItem(horizontalSpacer, 6, 0, 1, 2);

    ok_button = new QPushButton("Ok", this);
    gridLayout->addWidget(ok_button, 6, 2);

    cancel_button = new QPushButton("Cancel", this);
    gridLayout->addWidget(cancel_button, 6, 3);
}
