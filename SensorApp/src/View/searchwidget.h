#ifndef SEARCHWIDGET_H
#define SEARCHWIDGET_H


#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QScrollArea>
#include <QListWidget>
#include "Sensor/AbstractSensor.h"

class SearchWidget : public QWidget {
    Q_OBJECT

    private:
        QGridLayout *sensorListLayout;
        QLineEdit *searchLineEdit;
        QPushButton *searchButton;
        QPushButton *addButton;
        QPushButton *filterButton;
        QScrollArea *sensorScrollArea;
        QWidget *sensorScrollAreaWidgetContents;
        QVBoxLayout *sensorListVerticalLayout;
        QListWidget *sensorList;
        std::vector<AbstractSensor*> sensorPtrs;
        AbstractSensor* selectedSensor = nullptr;
        void handleSensorSelection();

    public:
        SearchWidget(QWidget *parent = nullptr);
        void updateSensorList(const std::vector<AbstractSensor*>& sensors);
        AbstractSensor* getSelectedSensor() const;

    signals:
        void addButtonClicked();
        void sensorSelected();

};


#endif // SEARCHWIDGET_H
