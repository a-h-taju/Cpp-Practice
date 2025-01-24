/*....01....Write a program to print the name, salary, and date of joining of 10
employees in a company. Use an array of objects.*/

#include <iostream>
#include <string>
using namespace std;
class employee
{
    string name, dateOfjoining;
    double salary;
public:
    void inputData();
    void outputData();
};
void employee::inputData()
{
    cout << "Enter the employee name: ";
    getline(cin, name);
    cout << "Enter the employee salary: ";
    cin >> salary;
    cin.ignore();
    cout << "Enter the employee date of joining(dd/mm/yy): ";
    getline(cin, dateOfjoining);
    cout << "-----------------------------" << endl;
}

void employee::outputData()
{
    cout << "Employee Name: " << name << endl;
    cout << "Employee Salary: " << salary << endl;
    cout << "Employee Date of Joining: " << dateOfjoining << endl;
}
int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    cin.ignore();
    employee Employee[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for employee " << i + 1 << ":" << endl;
        Employee[i].inputData();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nDetails for employee " << i + 1 << ":" << endl;
        Employee[i].outputData();
    }
    return 0;
}
