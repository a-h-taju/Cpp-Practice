/*You are designing a speed monitoring system for various vehicles. Create a base class
Vehicle with a virtual function maxSpeed(). Derive classes Car and Bike that override
maxSpeed() to return their specific maximum speeds. Write a program to determine the
speed of different vehicles using polymorphism.*/
#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual int maxSpeed()
    {
        return 0;
    }
};

class Car : public Vehicle
{
public:
    int maxSpeed() override
    {
        return 200;
    }
};
class Bike : public Vehicle
{
public:
    int maxSpeed() override
    {
        return 100;
    }
};

int main()
{
    Vehicle* vehiclePtr;

    Car car;
    Bike bike;

    vehiclePtr = &car;
    cout << "The maximum speed of the Car is: " << vehiclePtr->maxSpeed() << " km/h" << endl;

    vehiclePtr = &bike;
    cout << "The maximum speed of the Bike is: " << vehiclePtr->maxSpeed() << " km/h" << endl;

    return 0;
}
