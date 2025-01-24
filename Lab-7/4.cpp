/*....04....Create a class named Animal with a data member to store the name of the animal.
Create another class named Cat that inherits from the Animal class and has a data
member to store the number of lives of a cat. Write a program to create a Cat object
and print out its name and number of lives.*/

#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name;
public:
    Animal()
    {
        cout<<"Enter the Animal Name = ";
        cin>>name;
    }
};
class Cat : public Animal
{
protected:
    int num_of_lives;
public:
    Cat()
    {
        cout<<"Enter the number of lives a cat = ";
        cin>>num_of_lives;
    }
    void display()
    {
        cout<<"Cat Name = "<<name<<endl;
        cout<<"Number of Lives = "<<num_of_lives<<endl;
    }
};
int main()
{
    Cat cat;
    cout<<endl;
    cat.display();
    return 0;
}
