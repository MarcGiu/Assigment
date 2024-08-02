/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionAdd_sensor;
    QAction *actionEdit_sensor;
    QAction *actionDelete_sensor;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QFrame *vertical_line;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QLineEdit *search_line;
    QPushButton *filter_button;
    QPushButton *search_button;
    QPushButton *add_button;
    QSpacerItem *Spacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QListWidget *sensorList;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_graph;
    QPushButton *run_button;
    QSpacerItem *verticalSpacer;
    QFrame *horizontal_line;
    QWidget *widget_specific;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *edit_button;
    QPushButton *delete_button;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *unit_label;
    QLabel *custom_unit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Accur_label;
    QLabel *custom_accur;
    QHBoxLayout *horizontalLayout_5;
    QLabel *descr_label;
    QLabel *custom_descr;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *Id_label;
    QLabel *custom_id;
    QHBoxLayout *horizontalLayout_2;
    QLabel *name_label;
    QLabel *costom_name;
    QHBoxLayout *horizontalLayout_6;
    QLabel *locat_label;
    QLabel *custom_locat;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuRun;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(839, 637);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Assets/newfile.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/Assets/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/Assets/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionAdd_sensor = new QAction(MainWindow);
        actionAdd_sensor->setObjectName(QString::fromUtf8("actionAdd_sensor"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/Assets/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_sensor->setIcon(icon3);
        actionEdit_sensor = new QAction(MainWindow);
        actionEdit_sensor->setObjectName(QString::fromUtf8("actionEdit_sensor"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/Assets/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_sensor->setIcon(icon4);
        actionDelete_sensor = new QAction(MainWindow);
        actionDelete_sensor->setObjectName(QString::fromUtf8("actionDelete_sensor"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/Assets/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_sensor->setIcon(icon5);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        vertical_line = new QFrame(centralwidget);
        vertical_line->setObjectName(QString::fromUtf8("vertical_line"));
        vertical_line->setFrameShape(QFrame::VLine);
        vertical_line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(vertical_line, 0, 2, 3, 1);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        search_line = new QLineEdit(widget_3);
        search_line->setObjectName(QString::fromUtf8("search_line"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(search_line->sizePolicy().hasHeightForWidth());
        search_line->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(search_line, 0, 0, 1, 3);

        filter_button = new QPushButton(widget_3);
        filter_button->setObjectName(QString::fromUtf8("filter_button"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/Assets/filter.png"), QSize(), QIcon::Normal, QIcon::Off);
        filter_button->setIcon(icon6);

        gridLayout_2->addWidget(filter_button, 1, 2, 1, 2);

        search_button = new QPushButton(widget_3);
        search_button->setObjectName(QString::fromUtf8("search_button"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/Assets/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        search_button->setIcon(icon7);

        gridLayout_2->addWidget(search_button, 0, 3, 1, 1);

        add_button = new QPushButton(widget_3);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        add_button->setIcon(icon3);

        gridLayout_2->addWidget(add_button, 1, 1, 1, 1);

        Spacer = new QSpacerItem(44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(Spacer, 1, 0, 1, 1);

        scrollArea = new QScrollArea(widget_3);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 252, 428));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        sensorList = new QListWidget(scrollAreaWidgetContents);
        sensorList->setObjectName(QString::fromUtf8("sensorList"));

        verticalLayout_3->addWidget(sensorList);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 2, 0, 1, 4);


        gridLayout_3->addWidget(widget_3, 0, 3, 3, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(399, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        widget_graph = new QWidget(widget_2);
        widget_graph->setObjectName(QString::fromUtf8("widget_graph"));

        gridLayout->addWidget(widget_graph, 1, 0, 1, 1);

        run_button = new QPushButton(widget_2);
        run_button->setObjectName(QString::fromUtf8("run_button"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(run_button->sizePolicy().hasHeightForWidth());
        run_button->setSizePolicy(sizePolicy2);
        run_button->setAutoFillBackground(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/Assets/run.png"), QSize(), QIcon::Normal, QIcon::Off);
        run_button->setIcon(icon8);

        gridLayout->addWidget(run_button, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 306, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        gridLayout_3->addWidget(widget_2, 2, 0, 1, 2);

        horizontal_line = new QFrame(centralwidget);
        horizontal_line->setObjectName(QString::fromUtf8("horizontal_line"));
        horizontal_line->setFrameShape(QFrame::HLine);
        horizontal_line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(horizontal_line, 1, 0, 1, 2);

        widget_specific = new QWidget(centralwidget);
        widget_specific->setObjectName(QString::fromUtf8("widget_specific"));
        gridLayout_4 = new QGridLayout(widget_specific);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        edit_button = new QPushButton(widget_specific);
        edit_button->setObjectName(QString::fromUtf8("edit_button"));
        edit_button->setIcon(icon4);

        horizontalLayout_7->addWidget(edit_button);

        delete_button = new QPushButton(widget_specific);
        delete_button->setObjectName(QString::fromUtf8("delete_button"));
        delete_button->setIcon(icon5);

        horizontalLayout_7->addWidget(delete_button);


        gridLayout_4->addLayout(horizontalLayout_7, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        unit_label = new QLabel(widget_specific);
        unit_label->setObjectName(QString::fromUtf8("unit_label"));

        horizontalLayout_3->addWidget(unit_label);

        custom_unit = new QLabel(widget_specific);
        custom_unit->setObjectName(QString::fromUtf8("custom_unit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(custom_unit->sizePolicy().hasHeightForWidth());
        custom_unit->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(custom_unit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Accur_label = new QLabel(widget_specific);
        Accur_label->setObjectName(QString::fromUtf8("Accur_label"));

        horizontalLayout_4->addWidget(Accur_label);

        custom_accur = new QLabel(widget_specific);
        custom_accur->setObjectName(QString::fromUtf8("custom_accur"));
        sizePolicy3.setHeightForWidth(custom_accur->sizePolicy().hasHeightForWidth());
        custom_accur->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(custom_accur);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout_4->addLayout(verticalLayout_2, 1, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        descr_label = new QLabel(widget_specific);
        descr_label->setObjectName(QString::fromUtf8("descr_label"));

        horizontalLayout_5->addWidget(descr_label);

        custom_descr = new QLabel(widget_specific);
        custom_descr->setObjectName(QString::fromUtf8("custom_descr"));
        sizePolicy3.setHeightForWidth(custom_descr->sizePolicy().hasHeightForWidth());
        custom_descr->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(custom_descr);


        gridLayout_4->addLayout(horizontalLayout_5, 2, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Id_label = new QLabel(widget_specific);
        Id_label->setObjectName(QString::fromUtf8("Id_label"));

        horizontalLayout->addWidget(Id_label);

        custom_id = new QLabel(widget_specific);
        custom_id->setObjectName(QString::fromUtf8("custom_id"));
        sizePolicy3.setHeightForWidth(custom_id->sizePolicy().hasHeightForWidth());
        custom_id->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(custom_id);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        name_label = new QLabel(widget_specific);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        horizontalLayout_2->addWidget(name_label);

        costom_name = new QLabel(widget_specific);
        costom_name->setObjectName(QString::fromUtf8("costom_name"));
        sizePolicy3.setHeightForWidth(costom_name->sizePolicy().hasHeightForWidth());
        costom_name->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(costom_name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        locat_label = new QLabel(widget_specific);
        locat_label->setObjectName(QString::fromUtf8("locat_label"));

        horizontalLayout_6->addWidget(locat_label);

        custom_locat = new QLabel(widget_specific);
        custom_locat->setObjectName(QString::fromUtf8("custom_locat"));
        sizePolicy3.setHeightForWidth(custom_locat->sizePolicy().hasHeightForWidth());
        custom_locat->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(custom_locat);


        verticalLayout->addLayout(horizontalLayout_6);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 2, 1);


        gridLayout_3->addWidget(widget_specific, 0, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 839, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuRun = new QMenu(menubar);
        menuRun->setObjectName(QString::fromUtf8("menuRun"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        QWidget::setTabOrder(edit_button, delete_button);
        QWidget::setTabOrder(delete_button, run_button);
        QWidget::setTabOrder(run_button, search_line);
        QWidget::setTabOrder(search_line, search_button);
        QWidget::setTabOrder(search_button, add_button);
        QWidget::setTabOrder(add_button, filter_button);
        QWidget::setTabOrder(filter_button, scrollArea);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuRun->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuEdit->addAction(actionAdd_sensor);
        menuEdit->addAction(actionEdit_sensor);
        menuEdit->addAction(actionDelete_sensor);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionAdd_sensor->setText(QCoreApplication::translate("MainWindow", "Add sensor", nullptr));
        actionEdit_sensor->setText(QCoreApplication::translate("MainWindow", "Edit sensor", nullptr));
        actionDelete_sensor->setText(QCoreApplication::translate("MainWindow", "Delete sensor", nullptr));
        search_line->setText(QString());
        filter_button->setText(QCoreApplication::translate("MainWindow", "Filter", nullptr));
        search_button->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
#if QT_CONFIG(tooltip)
        add_button->setToolTip(QCoreApplication::translate("MainWindow", "create a new sensor", nullptr));
#endif // QT_CONFIG(tooltip)
        add_button->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
#if QT_CONFIG(tooltip)
        run_button->setToolTip(QCoreApplication::translate("MainWindow", "generate graph", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        run_button->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        run_button->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        run_button->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
#if QT_CONFIG(tooltip)
        edit_button->setToolTip(QCoreApplication::translate("MainWindow", "edit sensor specifics", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_button->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        delete_button->setToolTip(QCoreApplication::translate("MainWindow", "delete sensor", nullptr));
#endif // QT_CONFIG(tooltip)
        delete_button->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        unit_label->setText(QCoreApplication::translate("MainWindow", "Unit of measurement:", nullptr));
        custom_unit->setText(QString());
        Accur_label->setText(QCoreApplication::translate("MainWindow", "Accuracy:", nullptr));
        custom_accur->setText(QString());
        descr_label->setText(QCoreApplication::translate("MainWindow", "Description:", nullptr));
        custom_descr->setText(QString());
        Id_label->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        custom_id->setText(QString());
        name_label->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        costom_name->setText(QString());
        locat_label->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        custom_locat->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuRun->setTitle(QCoreApplication::translate("MainWindow", "Run", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
#if QT_CONFIG(tooltip)
        toolBar->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
