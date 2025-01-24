/*....10....Write a class Vehicle with attributes registrationNumber, ownerName, and
insuranceStatus. Use a copy constructor to create a duplicate insurance file for the same
vehicle. Add member functions to modify insurance details and display the records.*/

#include<iostream>
using namespace std;
class Vehicle
{
public:
    int registrationNumber;
    string ownerName;
    bool insuranceStatus;
    Vehicle(int reg, string nam, bool status)
    {
        registrationNumber = reg;
        ownerName = nam;
        insuranceStatus = status;
    }
    Vehicle(Vehicle &vehicle)
    {
        registrationNumber = vehicle.registrationNumber;
        ownerName = vehicle.ownerName;
        insuranceStatus = vehicle.insuranceStatus;
    }
    void update()
    {
        if(insuranceStatus)
            insuranceStatus = false;
        else insuranceStatus = true;
        cout<<"Insurance status updated successfully!"<<endl;
    }
    void display()
    {
        cout<<"Vehicle registration number: "<<registrationNumber<<endl;
        cout<<"Vehicle owner name: "<<ownerName<<endl;
        if(insuranceStatus)
            cout<<"Vehicle insurance status: Active"<<endl;
        else
            cout<<"Vehicle insurance status: Inactive"<<endl;
    }
};
int main()
{
    Vehicle vehicle1(123, "Taju", true);
    Vehicle vehicle2 = vehicle1;
    vehicle1.display();
    vehicle2.display();
    vehicle2.update();
    vehicle2.display();

    return 0;
}
