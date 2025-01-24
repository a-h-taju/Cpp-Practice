/*....04....You are organizing a school event and need to keep track of the
participating students.Create a class called "Student" with attributes
for student name and participation status.Implement member
functions to mark a student as present and display the student
details. Create an array of 5 Student objects and print the details of all
students who attended the event.*/

#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    bool isPresent;
public:
    Student(string studentName)
    {
        name = studentName;
        isPresent = false;
    }
    void markPresent()
    {
        isPresent = true;
    }
    string getName() const
    {
        return name;
    }

    void displayDetails() const
    {
        if (isPresent)
        {
            cout << "Student Name: " << name << " - Present" << endl;
        }
    }
};
int main()
{
    Student students[5] =
    {
        Student("Alice"),
        Student("Bob"),
        Student("Charlie"),
        Student("David"),
        Student("Eve")
    };
    for (int i = 0; i < 5; ++i)
    {
        char attendance;
        cout << "\nIs " << students[i].getName() << " present? (y/n): ";
        cin >> attendance;
        if (attendance == 'y' || attendance == 'Y')
        {
            students[i].markPresent();
        }
    }
    cout << "\nStudents who attended the event:\n";
    for (int i = 0; i < 5; ++i)

    {
        students[i].displayDetails();
    }
    return 0;
}
