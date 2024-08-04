#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QMenuBar>
#include <QStatusBar>
#include <QToolBar>
#include <QAction>
#include "searchwidget.h"
#include "detailswidget.h"
#include "graphwidget.h"
#include "editdialog.h"
#include "adddialog.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void openEditDialog();
    void openAddDialog();

private:
    std::vector<std::unique_ptr<AbstractSensor>> sensors;

    QWidget *centralWidget;
    QGridLayout *mainGridLayout;

    SearchWidget *sensorSearchWidget;
    DetailsWidget *sensorDetailsWidget;
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
};

#endif // MAINWINDOW_H

