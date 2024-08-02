#ifndef SEARCHWIDGET_H
#define SEARCHWIDGET_H


#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QScrollArea>
#include <QListWidget>

class SearchWidget : public QWidget {
    Q_OBJECT

public:
    SearchWidget(QWidget *parent = nullptr);

signals:
    void addButtonClicked();

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
};


#endif // SEARCHWIDGET_H
