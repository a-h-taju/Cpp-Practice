/*....02....Write a program to print the roll number and average marks of 8
students in three subjects (each out of 100). The marks are entered by
the user and the roll numbers are automatically assigned.*/

#include <iostream>

using namespace std;
class Student
{
public:
    int rollNo;
    int marks[3];
    double average;
    void inputData()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks in 3 subjects:\n";
        for (int i = 0; i < 3; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    void calculateAverage()
    {
        int total = marks[0] + marks[1] + marks[2];

        average = total / 3.0;
    }
    void displayData()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Average Marks: " << average << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].inputData();
        students[i].calculateAverage();
    }
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++)
    {
        students[i].displayData();
    }
    return 0;
}
