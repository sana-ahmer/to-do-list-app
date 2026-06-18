#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<algorithm>
using namespace std;

struct Task{
    int task_num;
    string task_title;
    bool done;
};

vector<Task> taskList;
int next_task = 1;

void saveTasks(){
    ofstream file("tasklist.txt");
    for (auto t : taskList){
        file << t.task_num << "," << t.done <<","<<t.task_title<<endl;
    }
    file.close();
}
void loadTasks(){
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

void searchForTask(){
    string search_t;
    cout<<"Enter task to search for: ";
    cin.ignore();
    getline(cin, search_t);
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

void addTask(){
    Task t;
    t.task_num = next_task++;
    t.done = false;
    cout<<"Enter task to be done: ";
    cin.ignore();
    getline(cin, t.task_title);
    taskList.push_back(t);
    cout<<"Task added."<<endl;
    saveTasks();
}
void deleteTask(){
    int id;
    cout<<"Enter task to be deleted: ";
    cin>>id;
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
void markCompleted(){
    int id;
    cout<<"Enter task number to mark as completed: ";
    cin>>id;
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

void showTaskList(){
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

int main(){
    loadTasks();
    int user_choice;
    while(true){
        cout<<"-----TO-DO LIST-------\n";
        cout<<"1. Add task\n";
        cout<<"2. Show all tasks\n";
        cout<<"3. Mark task as done\n";
        cout<<"4. Delete task\n";
        cout<<"5. Search Task\n";
        cout<<"6. Exit\n";
        cout<<"Enter choice (number only): ";
        cin>>user_choice;
        switch(user_choice){
            case 1:
                addTask();
                break;
            case 2:
                showTaskList();
                break;
            case 3:
                markCompleted();
                break;
            case 4:
                deleteTask();
                break;
            case 5:
                searchForTask();
                break;
            case 6:
                return 0;
            default:
                cout<<"Invalid choice\n";
        }
    }
}