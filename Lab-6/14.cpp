/*....14....Implement a class Flight with attributes flightNumber, destination, and fare.
 Use constructor overloading to initialize a flight with only flightNumber or all
attributes.
 Use a destructor to release reservation data when a flight is canceled.
Add member functions to calculate fare for different ticket types (economy,
business).*/

#include <iostream>
using namespace std;
class Flight
{
private:
    string flightNumber;
    string destination;
    double fare;
public:
    Flight()
    {
        cout<<"enter all details: "<<endl;
        cout<<"enter flight number: "<<endl;
        cin>>flightNumber;
        cout<<"enter destination: "<<endl;
        cin>>destination;
        cout<<"enter fare: "<<endl;
        cin>>fare;
    }
    Flight(string flightNum, string dest, double f)
    {
        flightNumber=flightNum;
        destination=dest;
        fare=f;
    }
    ~Flight()
    {
        cout << "Flight with flightNumber: " << flightNumber << " canceled and data released.\n";
    }
    double calculateEconomyFare() const
    {
        return fare * 0.9;
    }
    double calculateBusinessFare() const
    {
        return fare * 1.2;
    }
    void displayDetails() const
    {
        cout << "Flight Number: " << flightNumber
             << ", Destination: " << destination
             << ", Base Fare: " << fare << "\n";
    }
};
int main()
{
    Flight flight1();
    Flight flight2("FN456", "New York", 300);
    flight2.displayDetails();
    cout << "Economy Fare: " << flight2.calculateEconomyFare() << "\n";
    cout << "Business Fare: " << flight2.calculateBusinessFare() << "\n";
    return 0;
}
