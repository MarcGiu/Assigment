#include "mainwindow.h"
#include <QSpacerItem>
#include <QIcon>
#include <QMessageBox>
#include "Sensor/TemperatureSensor.h"
#include "Sensor/CO2Sensor.h"
#include "Sensor/HumiditySensor.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {

    // Central Widget
    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Main Grid Layout
    mainGridLayout = new QGridLayout(centralWidget);

    // Sensor Search Widget
    searchWidget = new SearchWidget(centralWidget);
    mainGridLayout->addWidget(searchWidget, 0, 3, 3, 1);
    connect(searchWidget, &SearchWidget::sensorSelected, this, &MainWindow::handleSensorSelection);
    connect(searchWidget, &SearchWidget::addButtonClicked, this, &MainWindow::openAddDialog);

    // Sensor Details Widget
    detailsWidget = new DetailsWidget(centralWidget);
    mainGridLayout->addWidget(detailsWidget, 0, 0, 1, 2);
    connect(detailsWidget, &DetailsWidget::editButtonClicked, this, &MainWindow::openEditDialog);

    // Graph Widget
    graphWidget = new GraphWidget(centralWidget);
    mainGridLayout->addWidget(graphWidget, 2, 0, 1, 2);

    // Lines
    QFrame *verticalLine = new QFrame(centralWidget);
    verticalLine->setFrameShape(QFrame::VLine);
    mainGridLayout->addWidget(verticalLine, 0, 2, 3, 1);

    QFrame *horizontalLine = new QFrame(centralWidget);
    horizontalLine->setFrameShape(QFrame::HLine);
    mainGridLayout->addWidget(horizontalLine, 1, 0, 1, 2);

    // Menubar
    menuBar = new QMenuBar(this);
    setMenuBar(menuBar);
    fileMenu = new QMenu("File", this);
    editMenu = new QMenu("Edit", this);
    runMenu = new QMenu("Run", this);
    menuBar->addMenu(fileMenu);
    menuBar->addMenu(editMenu);
    menuBar->addMenu(runMenu);

    // Statusbar
    statusBar = new QStatusBar(this);
    setStatusBar(statusBar);

    // Toolbar
    toolBar = addToolBar("Tool Bar");

    // Actions for file menu
    newAction = new QAction("New", this);
    newAction->setIcon(QIcon(":/img/Assets/newfile.png"));
    fileMenu->addAction(newAction);
    toolBar->addAction(newAction);

    openAction = new QAction("Open", this);
    openAction->setIcon(QIcon(":/img/Assets/open.png"));
    fileMenu->addAction(openAction);
    toolBar->addAction(openAction);

    saveAction = new QAction("Save", this);
    saveAction->setIcon(QIcon(":/img/Assets/save.png"));
    fileMenu->addAction(saveAction);
    toolBar->addAction(saveAction);

    // Actions for edit menu
    addSensorAction = new QAction("Add Sensor", this);
    addSensorAction->setIcon(QIcon(":/img/Assets/add.png"));
    editMenu->addAction(addSensorAction);
    connect(addSensorAction, &QAction::triggered, this, &MainWindow::openAddDialog);

    editSensorAction = new QAction("Edit Sensor", this);
    editSensorAction->setIcon(QIcon(":/img/Assets/edit.png"));
    editMenu->addAction(editSensorAction);
    connect(editSensorAction, &QAction::triggered, this, &MainWindow::openEditDialog);

    deleteSensorAction = new QAction("Delete Sensor", this);
    deleteSensorAction->setIcon(QIcon(":/img/Assets/delete.png"));
    editMenu->addAction(deleteSensorAction);



    // Esempio di aggiunta di un sensore al vettore
    sensors.push_back(new CO2Sensor("CO2 Sensor", "Monitors CO2 levels", 95.0, "", "Living Room"));
    sensors.push_back(new HumiditySensor("Humidity Sensor", "Monitors humidity levels", 90.0, "", "Basement", 20.0, 60.0));
    sensors.push_back(new TemperatureSensor("", "Monitors temperature levels", 85.0, "°F", "Kitchen"));


    // Popolare il SearchWidget con i sensori
    searchWidget->updateSensorList(sensors);
}

MainWindow::~MainWindow() {
    for (auto sensor : sensors) {
        delete sensor;
    }
    sensors.clear();
}


void MainWindow::openEditDialog() {
    handleSensorSelection();

    if (!selectedSensor) {
        QMessageBox::warning(this, "No Selection", "Please select a sensor to edit.");
        return;
    }

    editDialog.reset(new EditDialog(selectedSensor, this));
    editDialog->exec();
}

void MainWindow::openAddDialog() {
    if (!addDialog) {
        addDialog.reset(new AddDialog(this));
    }
    addDialog->exec();
}

const std::vector<AbstractSensor*>& MainWindow::getSensors() const {
    return sensors;
}

AbstractSensor* MainWindow::getSelectedSensor() const {
    return selectedSensor;
}

void MainWindow::handleSensorSelection() {
    selectedSensor = searchWidget->getSelectedSensor();
}


