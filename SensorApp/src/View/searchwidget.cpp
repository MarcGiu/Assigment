#include "searchwidget.h"
#include <QSpacerItem>
#include <QIcon>
#include <QLabel>
#include "sensordetailvisitor.h"

SearchWidget::SearchWidget(QWidget *parent)
    : QWidget(parent) {

    setFixedWidth(300);

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

    connect(sensorList, &QListWidget::itemSelectionChanged, this, &SearchWidget::handleSensorSelection);
}

void SearchWidget::updateSensorList(const std::vector<AbstractSensor*>& sensors) {
    sensorList->clear();
    sensorPtrs.clear();

    for (AbstractSensor* sensor : sensors) {
        sensorPtrs.push_back(sensor);

        QWidget *itemWidget = new QWidget();
        QGridLayout *gridLayout = new QGridLayout(itemWidget);

        SensorDetailVisitor detailVisitor(gridLayout, itemWidget);
        sensor->accept(detailVisitor);

        QLabel* nameLabel = new QLabel(QString("%1").arg(sensor->getName()));
        nameLabel->setStyleSheet("font-weight: bold; font-size: 14px;");
        QLabel* idLabel = new QLabel(QString("Id: %1").arg(sensor->getId()));
        QLabel* accLabel = new QLabel(QString("Accuracy: %1").arg(sensor->getAccuracy()));
        QLabel* locLabel = new QLabel(QString("Location: %1").arg(sensor->getLocation()));
        gridLayout->addWidget(nameLabel, 0, 4, 1, 8);
        gridLayout->addWidget(idLabel, 1, 4, 1, 8);
        gridLayout->addWidget(accLabel, 2, 4, 1, 8);
        gridLayout->addWidget(locLabel, 3, 4, 1, 8);

        QListWidgetItem *listItem = new QListWidgetItem(sensorList);
        listItem->setSizeHint(QSize(sensorList->width(), itemWidget->sizeHint().height()));
        sensorList->setItemWidget(listItem, itemWidget);
    }
}

void SearchWidget::handleSensorSelection() {
    QListWidgetItem *currentItem = sensorList->currentItem();
    if (currentItem) {
        int index = sensorList->row(currentItem);
        selectedSensor = sensorPtrs.at(index);
        emit sensorSelected();
    }
}

AbstractSensor* SearchWidget::getSelectedSensor() const {
    return selectedSensor;
}



