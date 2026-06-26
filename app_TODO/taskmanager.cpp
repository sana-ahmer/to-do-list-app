#include "taskmanager.h"

taskManager::taskManager() {}

void taskManager::saveTasks(){
    ofstream file("tasklist.txt");
    for (auto t : taskList){
        file << t.task_num << "," << t.done <<","<<t.task_title<<endl;
    }
    file.close();
}
void taskManager::loadTasks(){
    ifstream inFile("tasklist.txt");
    if (!inFile) return;
    string task_line;
    while (getline(inFile, task_line)){
        stringstream ss(task_line);
        string id, done, title;
        getline(ss, id, ',');
        getline(ss, done, ',');
        getline(ss, title, ',');
        Task t_new;
        t_new.task_num = stoi(id);
        t_new.done = (done == "1");
        t_new.task_title = title;
        taskList.push_back(t_new);
        if (t_new.task_num >= next_task){
            next_task = t_new.task_num + 1;
        }
    }
    inFile.close();
}

void taskManager::searchForTask(string search_t){
    bool found = false;
    for (auto t:taskList){
        if (t.task_title.find(search_t) !=string::npos){
            cout<<"("<<t.task_num<<")";
            if (t.done) cout << "[✓]";
            else cout<<"[ ]";
            cout<<t.task_title<<endl;
            found = true;
        }
    }
    if (!found) cout<<"No such task found!"<<endl;
}

void taskManager::addTask(string title){
    Task t;
    t.task_num = next_task++;
    t.done = false;
    t.task_title = title;
    taskList.push_back(t);
    cout<<"Task added."<<endl;
    saveTasks();
}
void taskManager::deleteTask(int id){
    for (auto it = taskList.begin(); it != taskList.end();
         it++){
        if (it->task_num == id){
            taskList.erase(it);
            cout<<"Task deleted successfully.\n";
            saveTasks();
            return;
        }
    }
    cout<<"Task does not exist.\n";
    saveTasks();
}
void taskManager::markCompleted(int id){
    for (auto &curr_task : taskList){
        if (curr_task.task_num == id){
            curr_task.done = true;
            cout<<"Task marked as done.\n";
            saveTasks();
            return;
        }
    }
    cout<<"Task does not exist\n";
    saveTasks();
}

void taskManager::showTaskList(){
    if (taskList.empty()){
        cout<<"No more Tasks to do."<<endl;
        return;
    }
    for (auto curr_t : taskList){
        cout<<"("<<curr_t.task_num<<")";
        if (curr_t.done) cout<<"[✓]";
        else cout<<"[ ]";
        cout<<curr_t.task_title<<endl;
    }
}