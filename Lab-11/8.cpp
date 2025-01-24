/*You are tasked with creating a food delivery system. Create a base class DeliveryVehicle
with a virtual function deliver(). Derive classes Bike and Drone, overriding the deliver()
function to define the delivery method. Use function overriding to ensure the correct
delivery method is called dynamically.*/
#include <iostream>
using namespace std;

class DeliveryVehicle
{
public:
    virtual void deliver()
    {
        cout << "Delivering food with a generic vehicle." << endl;
    }
};
class Bike : public DeliveryVehicle
{
public:
    void deliver()
    {
        cout << "Delivering food using a bike." << endl;
    }
};
class Drone : public DeliveryVehicle
{
public:
    void deliver()
    {
        cout << "Delivering food using a drone." << endl;
    }
};

int main()
{
    Bike bike;
    Drone drone;

    DeliveryVehicle *vehicle;
    vehicle = &bike;
    vehicle->deliver();
    vehicle = &drone;
    vehicle->deliver();

    return 0;
}
