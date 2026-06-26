#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    manager.loadTasks();
    refreshList();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refreshList(){
    ui->tasklistWidget->clear();
    for (auto task : manager.taskList){
        QString text;
        text = "(" + QString::number(task.task_num) + ") ";
        if (task.done)
            text += "[✓] ";
        else
            text += "[ ] ";
        text += QString::fromStdString(task.task_title);
        ui->tasklistWidget->addItem(text);
    }
}
void MainWindow::on_addButton_clicked()
{
    QString qtitle=ui->taskInput->text();
    if (qtitle.isEmpty()) return;
    string title = qtitle.toStdString();
    manager.addTask(title);
    refreshList();
    ui->taskInput->clear();
}
void MainWindow::on_completeButton_clicked()
{
    int row = ui->tasklistWidget->currentRow();
    if (row == -1) return;
    manager.taskList[row].done = true;
    manager.saveTasks();
    refreshList();

}
void MainWindow::on_deleteButton_clicked()
{
    int row = ui->tasklistWidget->currentRow();
    if (row == -1) return;
    manager.taskList.erase(manager.taskList.begin()+row);
    manager.saveTasks();
    refreshList();
    ui->tasklistWidget->clearSelection();


}

