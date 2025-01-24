/*....06....Create a class named Person with data members to store the name and age of a
person. Create another class named Student with data members to store the student ID
and GPA. Create a third class named StudentAthlete that inherits from both the
Student and Person classes and has a data member to store the sport played by the
student athlete. Write a program to create a StudentAthlete object and print out their
name, age, student ID, GPA, and sport.*/

#include<iostream>
#include<string>
using namespace std;

class person
{
protected:
    string name;
    int age;
public:
    person()
    {
        cout<<"Enter the person name = ";
        getline(cin,name);
        cout<<"Enter the person age = ";
        cin>>age;
        cin.ignore();
    }
};
class student
{
protected:
    string gpa;
    int id;
public:
    student()
    {
        cout<<"Enter the student id = ";
        cin>>id;
        cin.ignore();
        cout<<"Enter the student GPA = ";
        getline(cin,gpa);
    }
};
class student_athlete : public person,public student
{
protected:
    string sport;
public:
    student_athlete()
    {
        cout<<"Enter the student athlete = ";
        getline(cin,sport);
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"GPA : "<<gpa<<endl;
        cout<<"Sport : "<<sport<<endl;
    }
};
int main()
{
    student_athlete s;
    cout<<endl;
    s.display();
    return 0;
}
