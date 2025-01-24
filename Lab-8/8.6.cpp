#include<iostream>
using namespace std;

float calculateSalary(float a,int b)
{
    return a*b;
}
double calculateSalary(double x,float y)
{
    return x+y;
}
int main()
{
    float hour_wage,performance_bonus;
    int hours_worked;
    double base_salary;

    cout<<"Enter the hour wage = ";
    cin>>hour_wage;
    cout<<"Enter the hours worked = ";
    cin>>hours_worked;

    cout<<"Salary for an hourly employee = "<<calculateSalary(hour_wage,hours_worked)<<endl;
    cin.ignore();
    cout<<"Enter the base salary = ";
    cin>>base_salary;
    cout<<"Enter the performance bonus = ";
    cin>>performance_bonus;

    cout<<"Salary for a salaried employee = "<<calculateSalary(base_salary,performance_bonus)<<endl;

    return 0;
}
