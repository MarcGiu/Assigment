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
    View/graphwidget.cpp \
    View/detailswidget.cpp \
    View/adddialog.cpp \
    View/editdialog.cpp \
    View/mainwindow.cpp \
    View/searchwidget.cpp \
    View/sensordetailvisitor.cpp \
    View/sensorfieldvisitor.cpp \
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
    View/detailswidget.h \
    View/graphwidget.h \
    View/adddialog.h \
    View/editdialog.h \
    View/mainwindow.h \
    View/searchwidget.h \
    View/sensordetailvisitor.h \
    View/sensorfieldvisitor.h \
    mainwindow.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
