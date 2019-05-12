/********************************************************************************
** Form generated from reading UI file 'helixQtCmd.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELIXQTCMD_H
#define UI_HELIXQTCMD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helixQtCmdClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *helixQtCmdClass)
    {
        if (helixQtCmdClass->objectName().isEmpty())
            helixQtCmdClass->setObjectName(QString::fromUtf8("helixQtCmdClass"));
        helixQtCmdClass->resize(600, 400);
        menuBar = new QMenuBar(helixQtCmdClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        helixQtCmdClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(helixQtCmdClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        helixQtCmdClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(helixQtCmdClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        helixQtCmdClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(helixQtCmdClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        helixQtCmdClass->setStatusBar(statusBar);

        retranslateUi(helixQtCmdClass);

        QMetaObject::connectSlotsByName(helixQtCmdClass);
    } // setupUi

    void retranslateUi(QMainWindow *helixQtCmdClass)
    {
        helixQtCmdClass->setWindowTitle(QApplication::translate("helixQtCmdClass", "helixQtCmd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class helixQtCmdClass: public Ui_helixQtCmdClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELIXQTCMD_H
