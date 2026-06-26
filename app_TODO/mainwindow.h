#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "taskmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_addButton_clicked();

    void on_completeButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::MainWindow *ui;
    taskManager manager;
    void refreshList();
};
#endif // MAINWINDOW_H
