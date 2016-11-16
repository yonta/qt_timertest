/********************************************************************************
** Form generated from reading UI file 'qttimertest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTIMERTEST_H
#define UI_QTTIMERTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtTimerTest
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtTimerTest)
    {
        if (QtTimerTest->objectName().isEmpty())
            QtTimerTest->setObjectName(QStringLiteral("QtTimerTest"));
        QtTimerTest->resize(400, 300);
        menuBar = new QMenuBar(QtTimerTest);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtTimerTest->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtTimerTest);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtTimerTest->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtTimerTest);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtTimerTest->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtTimerTest);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtTimerTest->setStatusBar(statusBar);

        retranslateUi(QtTimerTest);

        QMetaObject::connectSlotsByName(QtTimerTest);
    } // setupUi

    void retranslateUi(QMainWindow *QtTimerTest)
    {
        QtTimerTest->setWindowTitle(QApplication::translate("QtTimerTest", "QtTimerTest", 0));
    } // retranslateUi

};

namespace Ui {
    class QtTimerTest: public Ui_QtTimerTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTIMERTEST_H
