/*....03....Write a program to calculate the average height of all the students
of a class. The number of students and their heights entered by the
user.*/

#include <iostream>
using namespace std;
class Student
{
public:
    float height;
    void inputData()
    {
        cout << "Enter height (in cm): ";
        cin >> height;
    }
    void displayData() const
    {
        cout << " Height: " << height << " cm" << endl;
    }
};
float averageHeight(Student students[], int n)
{
    float totalHeight = 0;
    for (int i = 0; i < n; i++)
    {
        totalHeight += students[i].height;
    }

    return totalHeight / n;
}
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
    }
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++)
    {
        students[i].displayData();
    }
    float AverageHeight = averageHeight(students, n);
    cout << "\nThe average height of the students is: " << AverageHeight
         << " cm" << endl;
    return 0;
}
