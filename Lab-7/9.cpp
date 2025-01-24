/*....09....Create a class named Animal with data members to store the name and age of the
animal. Create another class named Pet with a data member to store the owner of the
pet. Create a third class named PetAnimal that inherits from both the Animal and Pet
classes and has a data member*/

#include<iostream>
#include<string>
using namespace std;

class Animal
{
protected:
    string name;
    int age;
public:
    Animal()
    {
        cout<<"Enter the animal name = ";
        cin>>name;
        cout<<"Enter the animal age = ";
        cin>>age;
    }
};
class pet
{
protected:
    string owner_name;
public:
    pet()
    {
        cout<<"Enter the owner name = ";
        cin>>owner_name;
    }
};
class pet_animal : public Animal,public pet
{
protected:
    string color;
public:
    pet_animal()
    {
        cout<<"Enter the animal color = ";
        cin>>color;
    }
    void display()
    {
        cout<<"Animal Name : "<<name<<endl;
        cout<<"Animal Age : "<<age<<endl;
        cout<<"Animal Owner Name : "<<owner_name<<endl;
        cout<<"Animal Color : "<<color<<endl;
    }
};
int main()
{
    pet_animal s;
    cout<<endl;
    s.display();
    return 0;
}



