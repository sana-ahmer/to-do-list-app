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
    QCheckBox *hidecompletedcheck;
    QPushButton *showAll;
    QListWidget *tasklistWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *completeButton;
    QPushButton *deleteButton;
    QPushButton *clearButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(339, 407);
        MainWindow->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        MainWindow->setMouseTracking(true);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #CBC3E3\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #8B5CF6;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #7C3AED;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #6D28D9;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: white;\n"
"    border: 2px solid #C4B5FD;\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QListWidget {\n"
"    background-color: white;\n"
"    border: 2px solid #D8B4FE;\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QCheckBox {\n"
"    font-size: 10pt;\n"
"}\n"
"#addButton {\n"
"    background-color: #10B981;\n"
"}\n"
"\n"
"#addButton:hover {\n"
"    background-color: #059669;\n"
"}\n"
"\n"
"#deleteButton {\n"
"    background-color: #EF4444;\n"
"}\n"
"\n"
"#deleteButton:hover {\n"
"    background-color: #DC2626;\n"
"}\n"
"\n"
"#completeButton {\n"
"    background-color: #40E0D0;\n"
"}\n"
"\n"
"#comp"
                        "leteButton:hover {\n"
"    background-color: #1CA89A;\n"
"}\n"
"\n"
"#searchButton {\n"
"    background-color: #F59E0B;\n"
"}\n"
"\n"
"#searchButton:hover {\n"
"    background-color: #D97706;\n"
"}\n"
"#clearButton {\n"
"	background-color: #FFA500;\n"
"}\n"
"#clearButton:hover {\n"
"	backgorund-color: #D97706;\n"
"}"));
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

        hidecompletedcheck = new QCheckBox(centralwidget);
        hidecompletedcheck->setObjectName("hidecompletedcheck");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("SimSun-ExtB")});
        font2.setPointSize(10);
        hidecompletedcheck->setFont(font2);
        hidecompletedcheck->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #F7F4FF;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #8B5CF6;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #7C3AED;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #6D28D9;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: white;\n"
"    border: 2px solid #C4B5FD;\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QListWidget {\n"
"    background-color: white;\n"
"    border: 2px solid #D8B4FE;\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QCheckBox {\n"
"    font-size: 10pt;\n"
"}"));

        verticalLayout->addWidget(hidecompletedcheck);

        showAll = new QPushButton(centralwidget);
        showAll->setObjectName("showAll");

        verticalLayout->addWidget(showAll);

        tasklistWidget = new QListWidget(centralwidget);
        tasklistWidget->setObjectName("tasklistWidget");

        verticalLayout->addWidget(tasklistWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        completeButton = new QPushButton(centralwidget);
        completeButton->setObjectName("completeButton");
        completeButton->setAutoFillBackground(false);

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
        HEADING->setText(QCoreApplication::translate("MainWindow", "                               TO DO LIST", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Search Task", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Task to Add", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add Task", nullptr));
        hidecompletedcheck->setText(QCoreApplication::translate("MainWindow", "Show only incompleted tasks", nullptr));
        showAll->setText(QCoreApplication::translate("MainWindow", "Show All Tasks", nullptr));
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
