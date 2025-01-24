/*....03....Create a class named Vehicle with data members to store the number of wheels and
the top speed of a vehicle. Create another class named Car that inherits from the
Vehicle class and has a data member to store the number of doors. Write a program to
create a Car object and print out its number of wheels, top speed, and number of
doors.*/

#include <iostream>
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
class Car : public Vehicle
{
protected:
    int num_of_doors;
public:
    Car()
    {
        cout<<"Enter the number of Doors = ";
        cin>>num_of_doors;
    }
    void display()
    {
        cout<<"The Number of wheels are "<<number_of_wheels<<endl;
        cout<<"The top speed vehicles are "<<top_speed_vehicles<<"km/h"<<endl;
        cout<<"The Number of Doors are "<<num_of_doors<<endl;
    }
};
int main()
{
    Car car;
    cout<<endl;
    car.display();
    return 0;
}
