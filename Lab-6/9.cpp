/*....09....Create a class Employee with attributes employeeID, name, and salary. Use a copy
constructor to duplicate an existing employee&#39;s details into a new record. Add member
functions to modify and display the duplicated employee&#39;s details.*/

#include<iostream>
using namespace std;
class Employee
{
public:
    int employeeID;
    string name;
    int salary;
    Employee(int id, string nam, int salry)
    {
        employeeID = id;
        name = nam;
        salary = salry;
    }
    Employee(Employee &object)
    {
        employeeID = object.employeeID;
        name = object.name;
        salary = object.salary;
    }
    void update()
    {
        cout<<"Enter updated employee ID: ";
        cin>>employeeID;
        cout<<"Enter updated name: ";
        cin>>name;
        cout<<"Enter updated salary: ";
        cin>>salary;
        cout<<"Information updated successfully!"<<endl;
    }
    void display()
    {
        cout<<"Employee ID: "<<employeeID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    Employee employee1(123, "Sanin", 20000);
    Employee employee2 = employee1;
    employee1.display();
    employee2.display();
    employee2.update();
    employee2.display();
    return 0;
}
