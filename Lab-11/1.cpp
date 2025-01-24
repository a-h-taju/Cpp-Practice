/*As a software developer for a zoo simulation system, you need to model different animal
behaviors. Create a base class Animal with a virtual function speak(). Derive two classes
Dog and Cat, overriding the speak() function to simulate their unique sounds. Write a
program that uses pointers to call the appropriate speak() function based on the object
type.*/
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Some generic animal sound" << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Woof! Woof!" << endl;
    }
};
class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Meow! Meow!" << endl;
    }
};

int main()
{
    Animal* animalPtr;

    Dog dog;
    animalPtr = &dog;
    animalPtr->speak();

    Cat cat;
    animalPtr = &cat;
    animalPtr->speak();

    return 0;
}

