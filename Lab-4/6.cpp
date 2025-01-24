/*....06....You are working on a student management system and need to
create a class called "Student" in C++. The Student class should have
attributes for student ID, name, and grades. Implement member
functions to:
1. Add a grade to the student's record.
2. Calculate the average grade for the student.
Create an instance of the Student class with ID="S001", name="John
Smith", and grades=[85,90,78]. Add a grade of 95 to the student's
record and calculate the average grade. Print the
average grade.*/

#include <iostream>

using namespace std;

class Student
{
public:
    string id;
    string name;
    int grades[100];
    int gradeCount;

    Student()
    {
        gradeCount = 0;
    }

    void addGrade(int grade)
    {
        if (gradeCount < 100)
        {
            grades[gradeCount] = grade;
            gradeCount++;
        }
        else
        {
            cout << "Cannot add more grades. Maximum limit reached!" << endl;
        }
    }

    double calculateAverageGrade()
    {
        if (gradeCount == 0)
        {
            return 0.0;
        }

        int sum = 0;
        for (int i = 0; i < gradeCount; i++)
        {
            sum += grades[i];
        }
        return static_cast<double>(sum) / gradeCount;
    }
};

int main()
{
    Student student;
    student.id = "S001";
    student.name = "John Smith";

    student.addGrade(85);
    student.addGrade(90);
    student.addGrade(78);
    student.addGrade(95);

    double averageGrade = student.calculateAverageGrade();
    cout << "Average grade: " << averageGrade << endl;

    return 0;
}

