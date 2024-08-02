#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "editdialog.h"
#include "adddialog.h"
#include <QMessageBox>
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , addDialog(new AddDialog(this))
    , editDialog(new EditDialog(this))
{
    ui->setupUi(this);

    connect(ui->sensorList, &QListWidget::itemDoubleClicked, this, &MainWindow::on_sensorList_itemDoubleClicked);
    connect(ui->add_button, &QPushButton::clicked, this, &MainWindow::on_add_button_clicked);
    connect(ui->edit_button, &QPushButton::clicked, this, &MainWindow::on_edit_button_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete addDialog;
    delete editDialog;
}

void MainWindow::on_add_button_clicked()
{
    if (addDialog->exec() == QDialog::Accepted) {
        SensorInfo sensor;
        sensor.type = addDialog->getSensorType();
        sensor.name = addDialog->getSensorName();
        sensor.location = addDialog->getSensorLocation();
        sensor.unit = addDialog->getSensorUnit();
        sensor.accuracy = addDialog->getSensorAccuracy();
        sensor.description = addDialog->getSensorDescription();

        sensors.append(sensor);
        updateSensorList();
    }
}

void MainWindow::on_edit_button_clicked()
{
    QListWidgetItem *item = ui->sensorList->currentItem();
    if (!item) {
        QMessageBox::warning(this, "Edit Sensor", "Please select a sensor to edit.");
        return;
    }

    int index = ui->sensorList->row(item);
    SensorInfo &sensor = sensors[index];

    editDialog->setSensorInfo(sensor);
    if (editDialog->exec() == QDialog::Accepted) {
        sensor.name = editDialog->getSensorName();
        sensor.location = editDialog->getSensorLocation();
        sensor.unit = editDialog->getSensorUnit();
        sensor.accuracy = editDialog->getSensorAccuracy();
        sensor.description = editDialog->getSensorDescription();

        updateSensorList();
    }
}

void MainWindow::on_sensorList_itemDoubleClicked(QListWidgetItem *item)
{
    on_edit_button_clicked();
}

void MainWindow::updateSensorList()
{
    ui->sensorList->clear();
    for (const SensorInfo &sensor : sensors) {
        ui->sensorList->addItem(sensor.name);
    }
}
