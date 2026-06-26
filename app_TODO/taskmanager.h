#ifndef TASKMANAGER_H
#define TASKMANAGER_H
#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<algorithm>
using namespace std;
class taskManager
{
public:
    taskManager();
    struct Task{
        int task_num;
        string task_title;
        bool done;
    };

    vector<Task> taskList;
    int next_task = 1;

    void addTask(string title);
    void deleteTask(int id);
    void markCompleted(int id);
    void saveTasks();
    void loadTasks();
    void searchForTask(string search_t);
    void showTaskList();
};

#endif // TASKMANAGER_H
