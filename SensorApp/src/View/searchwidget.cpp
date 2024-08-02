#include "searchwidget.h"
#include <QSpacerItem>
#include <QIcon>

SearchWidget::SearchWidget(QWidget *parent)
    : QWidget(parent) {

    // Sensor List Layout
    sensorListLayout = new QGridLayout(this);

    // Search Line Edit
    searchLineEdit = new QLineEdit(this);
    sensorListLayout->addWidget(searchLineEdit, 0, 0, 1, 3);

    // Search Button
    searchButton = new QPushButton(this);
    searchButton->setText("Search");
    searchButton->setIcon(QIcon(":/img/Assets/search.png"));
    sensorListLayout->addWidget(searchButton, 0, 3, 1, 1);

    // Spacer
    QSpacerItem *spacer = new QSpacerItem(44, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);
    sensorListLayout->addItem(spacer, 1, 0, 1, 2);

    // Add Button
    addButton = new QPushButton(this);
    addButton->setText("Add");
    addButton->setToolTip("Create a new sensor");
    addButton->setIcon(QIcon(":/img/Assets/add.png"));
    sensorListLayout->addWidget(addButton, 1, 2, 1, 1);
    connect(addButton, &QPushButton::clicked, this, &SearchWidget::addButtonClicked);

    // Filter Button
    filterButton = new QPushButton(this);
    filterButton->setText("Filter");
    filterButton->setIcon(QIcon(":/img/Assets/filter.png"));
    sensorListLayout->addWidget(filterButton, 1, 3, 1, 1);

    // Scroll Area for Sensor List
    sensorScrollArea = new QScrollArea(this);
    sensorScrollArea->setWidgetResizable(true);
    sensorScrollAreaWidgetContents = new QWidget();
    sensorScrollAreaWidgetContents->setGeometry(QRect(0, 0, 278, 428));
    sensorListVerticalLayout = new QVBoxLayout(sensorScrollAreaWidgetContents);
    sensorList = new QListWidget(sensorScrollAreaWidgetContents);
    sensorListVerticalLayout->addWidget(sensorList);
    sensorScrollArea->setWidget(sensorScrollAreaWidgetContents);
    sensorListLayout->addWidget(sensorScrollArea, 2, 0, 1, 4);
}
