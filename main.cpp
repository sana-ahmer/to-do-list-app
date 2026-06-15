#include<iostream>
#include<Vector>
#include<algorithm>
using namespace std;

struct Task{
    int task_num;
    string task_title;
    bool done;
};

vector<Task> taskList;
int next_task = 1;

void addTask(){
    Task t;
    t.task_num = next_task++;
    t.done = false;
    cout<<"Enter task to be done: ";
    cin.ignore();
    getline(cin, t.task_title);
    taskList.push_back(t);
    cout<<"Task added."<<endl;
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
            return;
        }
    }
    cout<<"Task does not exist.\n";
}
void markCompleted(){
    int id;
    cout<<"Enter task number to mark as completed: ";
    cin>>id;
    for (auto &curr_task : taskList){
        if (curr_task.task_num == id){
            curr_task.done = true;
            cout<<"Task marked as done.\n";
            return;
        }
    }
    cout<<"Task does not exist\n";
}
void showTaskList(){
    if (taskList.empty()){
        cout<<"No more Tasks to do."<<endl;
        return;
    }
    for (auto curr_t : taskList){
        cout<<curr_t.task_num<< ". "<<curr_t.task_title;
        if (curr_t.done) cout<<"[Completed]";
        cout<<endl;
    }
}

int main(){
    int user_choice;
    while(true){
        cout<<"-----TO-DO LIST-------\n";
        cout<<"1. Add task\n";
        cout<<"2. Show all tasks\n";
        cout<<"3. Mark task as done\n";
        cout<<"4. Delete task\n";
        cout<<"5. Exit\n";
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
                return 0;
            default:
                cout<<"Invalid choice\n";
        }
    }
}