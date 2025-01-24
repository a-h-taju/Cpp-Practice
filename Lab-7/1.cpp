/*....01....Create a class named Person with a data member to store the name of the person.
Create another class named Student that inherits from the Person class and has a data
member to store the student ID. Write a program to create a Student object and print
out their name and ID.*/

#include<iostream>
#include<string>

using namespace std;

class person
{
protected:
    string name;
public:
    person()
    {
        cout<<"Enter the person name = ";
        getline(cin,name);
    }
};
class student : public person
{
protected:
    int student_id;
public:
    student()
    {
        cout<<"Enter the Student ID = ";
        cin>>student_id;
    }

    void display()
    {
        cout<<"Student ID = "<<student_id<<endl;
        cout<<"Student Name = "<<name<<endl;
    }
};

int main()
{
    student Student;
    cout<<endl;
    Student.display();
    return 0;
}
