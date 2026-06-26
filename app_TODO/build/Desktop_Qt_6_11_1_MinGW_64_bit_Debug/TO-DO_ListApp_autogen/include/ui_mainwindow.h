/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *HEADING;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *searchInput;
    QPushButton *searchButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *taskInput;
    QPushButton *addButton;
    QPushButton *pushButton;
    QCheckBox *hidecompletedcheck;
    QListWidget *tasklistWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *completeButton;
    QPushButton *deleteButton;
    QPushButton *clearButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(357, 407);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        HEADING = new QLabel(centralwidget);
        HEADING->setObjectName("HEADING");
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(12);
        font.setBold(true);
        HEADING->setFont(font);
        HEADING->setIndent(0);

        verticalLayout->addWidget(HEADING);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("SimSun-ExtB")});
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        searchInput = new QLineEdit(centralwidget);
        searchInput->setObjectName("searchInput");

        horizontalLayout->addWidget(searchInput);

        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName("searchButton");

        horizontalLayout->addWidget(searchButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        taskInput = new QLineEdit(centralwidget);
        taskInput->setObjectName("taskInput");

        horizontalLayout_2->addWidget(taskInput);

        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");

        horizontalLayout_2->addWidget(addButton);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        hidecompletedcheck = new QCheckBox(centralwidget);
        hidecompletedcheck->setObjectName("hidecompletedcheck");
        hidecompletedcheck->setFont(font1);

        verticalLayout->addWidget(hidecompletedcheck);

        tasklistWidget = new QListWidget(centralwidget);
        tasklistWidget->setObjectName("tasklistWidget");

        verticalLayout->addWidget(tasklistWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        completeButton = new QPushButton(centralwidget);
        completeButton->setObjectName("completeButton");

        horizontalLayout_3->addWidget(completeButton);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName("deleteButton");

        horizontalLayout_3->addWidget(deleteButton);

        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");

        horizontalLayout_3->addWidget(clearButton);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        HEADING->setText(QCoreApplication::translate("MainWindow", "TO DO LIST", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Search Task", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Task to Add", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add Task", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Show All Tasks", nullptr));
        hidecompletedcheck->setText(QCoreApplication::translate("MainWindow", "Show only incompleted tasks", nullptr));
        completeButton->setText(QCoreApplication::translate("MainWindow", "Complete Task", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete Task", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
