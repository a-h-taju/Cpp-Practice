/*....16....Create a class Student with attributes rollNumber, name, and grade.
 Use a default constructor to initialize students who haven&#39;t received grades yet.
 Use a parameterized constructor to initialize students with grades.
Add member functions to update and display grades.*/

#include <iostream>
using namespace std;
class Student
{
private:
    int rollNumber;
    string name;
    char grade;
public:
    Student()
    {
        cout<<"this student was not graded"<<endl;
        cout<<"enter studdent roll: "<<endl;
        cin>>rollNumber;
        cout<<"eenter name: "<<endl;
        cin>>name;
        cout<<"enter grade: "<<endl;
        cin>>grade;
    }
    Student(int roll, string studentName, char studentGrade)
    {
        rollNumber=roll;
        name=studentName;
        grade=studentGrade;
    }
    void updateGrade(char newGrade)
    {
        grade = newGrade;
        cout << "Grade updated to " << grade << " for student " << name << ".\n";
    }
    void displayDetails()
    {
        cout << "Roll Number: " << rollNumber
             << ", Name: " << name
             << ", Grade: " << grade << "\n";
    }
};
int main()
{
    Student student1;
    student1.displayDetails();
    Student student2(101, "Alice", 'A');
    student2.displayDetails();
    student1.updateGrade('B');
    student1.displayDetails();
    return 0;
}
