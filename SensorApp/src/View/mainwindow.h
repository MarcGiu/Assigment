#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QMenuBar>
#include <QStatusBar>
#include <QToolBar>
#include <QAction>
#include "Sensor/AbstractSensor.h"
#include "searchwidget.h"
#include "detailswidget.h"
#include "graphwidget.h"
#include "editdialog.h"
#include "adddialog.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

private:
    std::vector<AbstractSensor*> sensors;
    AbstractSensor* selectedSensor;

    QWidget *centralWidget;
    QGridLayout *mainGridLayout;

    SearchWidget *searchWidget;
    DetailsWidget *detailsWidget;
    GraphWidget *graphWidget;

    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *runMenu;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *addSensorAction;
    QAction *editSensorAction;
    QAction *deleteSensorAction;

    QScopedPointer<EditDialog> editDialog;
    QScopedPointer<AddDialog> addDialog;

    void openEditDialog();
    void openAddDialog();
    void handleSensorSelection();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    const std::vector<AbstractSensor*>& getSensors() const;
    AbstractSensor* getSelectedSensor() const;

};

#endif // MAINWINDOW_H

