/*....10....Create two classes named “Mammals” and “MarineAnimals.” Create another class
called “BlueWhale,” which inherits both the above classes. Now, create a function in
each of these classes that prints "I am a mammal,” "I am a marine animal," and "I
belong to both the categories: Mammals as well as Marine Animals," respectively.
Now, create an object for each of the above classes and try calling
– a function of Mammals by the object of Mammal
– a function of MarineAnimal by the object of MarineAnimal
– a function of BlueWhale by the object of BlueWhale
– a function of each of its parents by the object of BlueWhale*/

#include<iostream>
using namespace std;
class Mammals
{
public:
    void mammals()
    {
        cout<<"I am Mammal."<<endl;
    }
};
class Marine_Animals
{
public:
    void marine_Animals()
    {
        cout<<"I am a Marine Animals."<<endl;
    }
};
class Blue_whale : public Mammals,public Marine_Animals
{
public:
    void blue_whale()
    {
        cout<<"I belong to both the categories : Mammals as well as Marine Animals."<<endl;
    }
};
int main()
{
    Mammals obj1;
    cout<<"Mammals object:";
    obj1.mammals();

    Marine_Animals obj2;
    cout<<"marine_Animals object:";
    obj2.marine_Animals();

    Blue_whale obj3;
    cout<<"blue_whale object:";
    obj3.blue_whale();

    cout<<endl;

    cout<<"Accessing Mammals by the object of Blue Whale:";
    obj3.mammals();
    cout<<"Accessing Marine Animals by the object of Blue Whale:";
    obj3.marine_Animals();

    return 0;
}
