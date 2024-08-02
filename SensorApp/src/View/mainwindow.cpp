#include "mainwindow.h"
#include <QSpacerItem>
#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {

    // Central Widget
    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Main Grid Layout
    mainGridLayout = new QGridLayout(centralWidget);

    // Sensor Search Widget
    sensorSearchWidget = new SearchWidget(centralWidget);
    mainGridLayout->addWidget(sensorSearchWidget, 0, 3, 3, 1);
    connect(sensorSearchWidget, &SearchWidget::addButtonClicked, this, &MainWindow::openAddDialog);


    // Sensor Details Widget
    sensorDetailsWidget = new DetailsWidget(centralWidget);
    mainGridLayout->addWidget(sensorDetailsWidget, 0, 0, 1, 2);
    connect(sensorDetailsWidget, &DetailsWidget::editButtonClicked, this, &MainWindow::openEditDialog);

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
}

MainWindow::~MainWindow() {
    // Destructor
}

void MainWindow::openEditDialog() {
    if (!editDialog) {
        editDialog.reset(new EditDialog(this));
    }
    editDialog->exec();
}

void MainWindow::openAddDialog() {
    if (!addDialog) {
        addDialog.reset(new AddDialog(this));
    }
    addDialog->exec();
}


