/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFsdfd;
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_connect_server;
    QPushButton *pushButton_del;
    QLineEdit *lineEdit_search;
    QLineEdit *lineEdit_get;
    QPushButton *pushButton_search_device;
    QPushButton *pushButton_add;
    QPushButton *pushButton_get_config;
    QLineEdit *lineEdit_connect;
    QLineEdit *lineEdit_add;
    QLineEdit *lineEdit_del;
    QWidget *widget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QMenuBar *menuBar;
    QMenu *menuA;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(779, 424);
        actionFsdfd = new QAction(MainWindow);
        actionFsdfd->setObjectName(QStringLiteral("actionFsdfd"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 40, 671, 271));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(horizontalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(70, 90, 241, 190));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_connect_server = new QPushButton(gridLayoutWidget);
        pushButton_connect_server->setObjectName(QStringLiteral("pushButton_connect_server"));

        gridLayout->addWidget(pushButton_connect_server, 3, 1, 1, 1);

        pushButton_del = new QPushButton(gridLayoutWidget);
        pushButton_del->setObjectName(QStringLiteral("pushButton_del"));

        gridLayout->addWidget(pushButton_del, 6, 1, 1, 1);

        lineEdit_search = new QLineEdit(gridLayoutWidget);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));

        gridLayout->addWidget(lineEdit_search, 0, 2, 1, 1);

        lineEdit_get = new QLineEdit(gridLayoutWidget);
        lineEdit_get->setObjectName(QStringLiteral("lineEdit_get"));

        gridLayout->addWidget(lineEdit_get, 1, 2, 1, 1);

        pushButton_search_device = new QPushButton(gridLayoutWidget);
        pushButton_search_device->setObjectName(QStringLiteral("pushButton_search_device"));

        gridLayout->addWidget(pushButton_search_device, 0, 1, 1, 1);

        pushButton_add = new QPushButton(gridLayoutWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));

        gridLayout->addWidget(pushButton_add, 4, 1, 1, 1);

        pushButton_get_config = new QPushButton(gridLayoutWidget);
        pushButton_get_config->setObjectName(QStringLiteral("pushButton_get_config"));

        gridLayout->addWidget(pushButton_get_config, 1, 1, 1, 1);

        lineEdit_connect = new QLineEdit(gridLayoutWidget);
        lineEdit_connect->setObjectName(QStringLiteral("lineEdit_connect"));

        gridLayout->addWidget(lineEdit_connect, 3, 2, 1, 1);

        lineEdit_add = new QLineEdit(gridLayoutWidget);
        lineEdit_add->setObjectName(QStringLiteral("lineEdit_add"));

        gridLayout->addWidget(lineEdit_add, 4, 2, 1, 1);

        lineEdit_del = new QLineEdit(gridLayoutWidget);
        lineEdit_del->setObjectName(QStringLiteral("lineEdit_del"));

        gridLayout->addWidget(lineEdit_del, 6, 2, 1, 1);


        horizontalLayout->addWidget(groupBox);

        widget = new QWidget(horizontalLayoutWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setAutoFillBackground(false);
        gridLayoutWidget_2 = new QWidget(widget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(40, 40, 251, 181));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);

        horizontalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 779, 25));
        menuA = new QMenu(menuBar);
        menuA->setObjectName(QStringLiteral("menuA"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuA->menuAction());
        menuA->addAction(actionFsdfd);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionFsdfd->setText(QApplication::translate("MainWindow", "fsdfd", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", 0));
        pushButton_connect_server->setText(QApplication::translate("MainWindow", "connect server", 0));
        pushButton_del->setText(QApplication::translate("MainWindow", "del camera", 0));
        pushButton_search_device->setText(QApplication::translate("MainWindow", "search device", 0));
        pushButton_add->setText(QApplication::translate("MainWindow", "add camera", 0));
        pushButton_get_config->setText(QApplication::translate("MainWindow", "get config", 0));
        menuA->setTitle(QApplication::translate("MainWindow", "a", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
