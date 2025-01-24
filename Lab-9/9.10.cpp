#include <iostream>
#include <string>

using namespace std;

class Task
{
private:
    string name;
    bool completed;

public:
    Task(string taskName)
    {
        name = taskName;
        completed = false;
    }
    void operator!()
    {
        completed = !completed;
    }

    void displayStatus()
    {
        cout << "Task: " << name << " is "
             << (completed ? "completed" : "not completed") << endl;
    }
};

int main()
{
    Task myTask("Write a C++ program");
    myTask.displayStatus();
    cout<<endl;
    !myTask;
    myTask.displayStatus();
    cout<<endl;
    !myTask;
    myTask.displayStatus();

    return 0;
}

