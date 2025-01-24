/*In a learning management system, model different types of users. Create a base class
User with a virtual function accessPortal(). Derive classes Student and Teacher,
overriding the function to define access levels. Write a program to demonstrate how
polymorphism manages access for various users.*/
#include <iostream>
using namespace std;

class User
{
public:
    virtual void accessPortal()
    {
        cout << "General access to the Learning Management System." << endl;
    }
};
class Student : public User
{
public:
    void accessPortal()
    {
        cout << "Access to course materials, assignments, and grades." << endl;
    }
};
class Teacher : public User
{
public:
    void accessPortal()
    {
        cout << "Access to create/edit course materials, assignments, and view student performance." << endl;
    }
};
int main()
{
    Student student;
    Teacher teacher;

    cout << "Demonstrating access levels for different users:\n" << endl;

    User *user;
    user = &student;
    user->accessPortal();
    user = &teacher;
    user->accessPortal();

    return 0;
}
