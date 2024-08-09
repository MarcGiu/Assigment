#ifndef DETAILSWIDGET_H
#define DETAILSWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>

class DetailsWidget : public QWidget {
    Q_OBJECT

    private:
        QGridLayout *DetailsGridLayout;
        QPushButton *editButton;
        QPushButton *deleteButton;
        QLabel *sensorIdLabel;
        QLabel *sensorNameLabel;
        QLabel *sensorLocationLabel;
        QLabel *sensorUnitLabel;
        QLabel *sensorAccuracyLabel;
        QLabel *sensorDescriptionLabel;

    public:
        DetailsWidget(QWidget *parent = nullptr);

    signals:
        void editButtonClicked();
};


#endif // DETAILSWIDGET_H
