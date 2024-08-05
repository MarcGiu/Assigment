#include "editdialog.h"
#include "sensorfieldvisitor.h"
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QComboBox>
#include <QGridLayout>

EditDialog::EditDialog(AbstractSensor& sensor, QWidget *parent) :
    QDialog(parent), sensor(sensor)
{
    this->setWindowTitle("Edit Sensor");
    this->resize(600, 400);

    gridLayout = new QGridLayout(this);

    QLabel *name_label = new QLabel("Name", this);
    gridLayout->addWidget(name_label, 0, 0);

    name_edit = new QLineEdit(this);
    gridLayout->addWidget(name_edit, 0, 1, 1, 3);

    QLabel *locat_label = new QLabel("Location", this);
    gridLayout->addWidget(locat_label, 1, 0);

    locat_edit = new QLineEdit(this);
    gridLayout->addWidget(locat_edit, 1, 1, 1, 3);

    QLabel *accur_label = new QLabel("Accuracy", this);
    gridLayout->addWidget(accur_label, 2, 0);

    accur_edit = new QLineEdit(this);
    gridLayout->addWidget(accur_edit, 2, 1, 1, 3);

    QLabel *descr_label = new QLabel("Description", this);
    gridLayout->addWidget(descr_label, 3, 0);

    descr_edit = new QTextEdit(this);
    gridLayout->addWidget(descr_edit, 3, 1, 1, 3);

    SensorFieldVisitor visitor(gridLayout);
    visitor.setStartRow(4);
    sensor.accept(visitor);

    QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout->addItem(horizontalSpacer, 6, 0, 1, 2);

    ok_button = new QPushButton("Ok", this);
    gridLayout->addWidget(ok_button, 6, 2);

    cancel_button = new QPushButton("Cancel", this);
    gridLayout->addWidget(cancel_button, 6, 3);
}
