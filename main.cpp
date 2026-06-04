#include<iostream>
#include<Vector>
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
        cout<<"3. Exit\n";
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
                return 0;
            default:
                cout<<"Invalid choice\n";
        }
    }
}