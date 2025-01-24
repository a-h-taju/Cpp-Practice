/*....08....Create a class named Vehicle with data members to store the number of wheels and
the top speed of a vehicle. Create another class named Engine with a data member to
store the horsepower of the engine. Create a third class named Car that inherits from
both the Vehicle and Engine classes and has a data member to store the number of
doors. Write a program to create a Car object and print out its number of wheels, top
speed, horsepower, and number of doors.*/

#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
protected:
    int number_of_wheels,top_speed_vehicles;
public:
    Vehicle()
    {
        cout<<"Enter the number of wheels = ";
        cin>>number_of_wheels;
        cout<<"Enter the top speed vehicles = ";
        cin>>top_speed_vehicles;
    }
};
class Engine
{
protected:
    int horse_power;
public:
    Engine()
    {
        cout<<"Enter the horse power = ";
        cin>>horse_power;
    }
};
class Car : public Vehicle,public Engine
{
protected:
    int door;
public:
    Car()
    {
        cout<<"Enter the number of door = ";
        cin>>door;
    }
    void display()
    {
        cout<<"Number of Wheels : "<<number_of_wheels<<endl;
        cout<<"Top Speed : "<<top_speed_vehicles<<"km/h"<<endl;
        cout<<"Horse power : "<<horse_power<<"HP"<<endl;
        cout<<"Number of Door : "<<door<<endl;
    }
};
int main()
{
    Car s;
    cout<<endl;
    s.display();
    return 0;
}


