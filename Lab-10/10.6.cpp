#include<iostream>
#include<string>
using namespace std;

class Employee
{
    string name;
    double salary;
public:
    Employee(string a,double b)
    {
        name = a;
        salary = b;
    }
    Employee operator + (double bonus)
    {
        return Employee(name,salary+=bonus);
    }
    void display()
    {
        cout<<"Employee Name = "<<name<<endl;
        cout<<"Employee salary = "<<salary<<endl;
    }
};
int main()
{
    Employee em("AH Taju Mia",10000);
    cout<<"Before adding bonus- "<<endl;
    em.display();
    cout<<endl;
    em + 5000;
    cout<<"After adding bonus- "<<endl;
    em.display();

    return 0;
}


