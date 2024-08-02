#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "adddialog.h"
#include "editdialog.h"
#include "Sensor/SensorInfo.h"
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_add_button_clicked();
    void on_edit_button_clicked();
    void on_sensorList_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    //
    AddDialog *addDialog;
    EditDialog *editDialog;
    QVector<SensorInfo> sensors;
    //
    void updateSensorList();
};
#endif // MAINWINDOW_H
