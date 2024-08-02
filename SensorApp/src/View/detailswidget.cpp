#include "detailswidget.h"
#include <QIcon>

DetailsWidget::DetailsWidget(QWidget *parent)
    : QWidget(parent) {

    // Sensor Details Grid Layout
    DetailsGridLayout = new QGridLayout(this);

    // Edit and Delete Buttons
    editButton = new QPushButton(this);
    editButton->setText("Edit");
    editButton->setToolTip("Edit sensor specifics");
    editButton->setIcon(QIcon(":/img/Assets/edit.png"));
    DetailsGridLayout->addWidget(editButton, 0, 2, 1, 1);

    deleteButton = new QPushButton(this);
    deleteButton->setText("Delete");
    deleteButton->setToolTip("Delete sensor");
    deleteButton->setIcon(QIcon(":/img/Assets/delete.png"));
    DetailsGridLayout->addWidget(deleteButton, 0, 3, 1, 1);
    connect(editButton, &QPushButton::clicked, this, &DetailsWidget::editButtonClicked);

    // Sensor Details
    QLabel *idTextLabel = new QLabel(this);
    idTextLabel->setText("ID:");
    DetailsGridLayout->addWidget(idTextLabel, 0, 0);

    sensorIdLabel = new QLabel(this);
    DetailsGridLayout->addWidget(sensorIdLabel, 0, 1);

    QLabel *nameTextLabel = new QLabel(this);
    nameTextLabel->setText("Name:");
    DetailsGridLayout->addWidget(nameTextLabel, 1, 0);

    sensorNameLabel = new QLabel(this);
    DetailsGridLayout->addWidget(sensorNameLabel, 1, 1);

    QLabel *unitTextLabel = new QLabel(this);
    unitTextLabel->setText("Unit of measurement:");
    DetailsGridLayout->addWidget(unitTextLabel, 1, 2);

    sensorUnitLabel = new QLabel(this);
    DetailsGridLayout->addWidget(sensorUnitLabel, 1, 3);

    QLabel *locationTextLabel = new QLabel(this);
    locationTextLabel->setText("Location:");
    DetailsGridLayout->addWidget(locationTextLabel, 2, 0);

    sensorLocationLabel = new QLabel(this);
    DetailsGridLayout->addWidget(sensorLocationLabel, 2, 1);

    QLabel *accuracyTextLabel = new QLabel(this);
    accuracyTextLabel->setText("Accuracy:");
    DetailsGridLayout->addWidget(accuracyTextLabel, 2, 2);

    sensorAccuracyLabel = new QLabel(this);
    DetailsGridLayout->addWidget(sensorAccuracyLabel, 2, 3);

    QLabel *descriptionTextLabel = new QLabel(this);
    descriptionTextLabel->setText("Description:");
    DetailsGridLayout->addWidget(descriptionTextLabel, 3, 0);

    sensorDescriptionLabel = new QLabel(this);
    DetailsGridLayout->addWidget(sensorDescriptionLabel, 3, 1, 1, 3);
}
