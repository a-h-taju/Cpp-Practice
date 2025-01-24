/*In a company payroll system, create a base class Employee with a virtual function
calculateSalary(). Derive two classes FullTimeEmployee and PartTimeEmployee,
overriding calculateSalary() to compute salaries based on hours worked. Use a base class
pointer to manage employees polymorphically.*/
#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary() = 0;
};
class FullTimeEmployee : public Employee
{
private:
    double hourlyRate;
    int hoursWorked;

public:
    FullTimeEmployee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    void calculateSalary()
    {
        double salary = hourlyRate * hoursWorked;
        cout << "Full-Time Employee Salary: $" << salary << endl;
    }
};
class PartTimeEmployee : public Employee
{
private:
    double hourlyRate;
    int hoursWorked;

public:
    PartTimeEmployee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    void calculateSalary()
    {
        double salary = hourlyRate * hoursWorked;
        cout << "Part-Time Employee Salary: $" << salary << endl;
    }
};

int main()
{
    FullTimeEmployee ftEmployee(25.0, 160);
    PartTimeEmployee ptEmployee(20.0, 80);

    // Use an array of base class pointers to manage them
    Employee* employees[2] = { &ftEmployee, &ptEmployee };

    for (int i = 0; i < 2; ++i)
    {
        employees[i]->calculateSalary();
    }

    return 0;
}


