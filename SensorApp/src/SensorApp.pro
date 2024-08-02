QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Sensor/AbstractSensor.cpp \
    Sensor/CO2Sensor.cpp \
    Sensor/HumiditySensor.cpp \
    Sensor/TemperatureSensor.cpp \
    View/adddialog.cpp \
    View/editdialog.cpp \
    View/mainwindow.cpp \
    main.cpp


HEADERS += \
    Sensor/AbstractSensor.h \
    Sensor/CO2Sensor.h \
    Sensor/HumiditySensor.h \
    Sensor/IConstVisitor.h \
    Sensor/IVisitor.h \
    Sensor/SensorInfo.h \
    Sensor/SensorObserver.h \
    Sensor/TemperatureSensor.h \
    View/adddialog.h \
    View/editdialog.h \
    View/mainwindow.h \
    mainwindow.h

FORMS += \
    Ui/adddialog.ui \
    Ui/editdialog.ui \
    Ui/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
