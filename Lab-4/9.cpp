/*....09....You are developing a calendar application and need to create a
class called "Event" in C++. The Event class should have attributes for
event name, date, and location. Implement a member function to:
1. Display the details of the event.
Create an instance of the Event class with name="Birthday Party",
date="2023-08-15", and location="Park Plaza". Call the display
function to print the event details.*/

#include<iostream>

using namespace std;

class Event
{
public:
    string eventName,date,location;
    void eventDetails()
    {
        cout<<"Event Name = "<<eventName<<endl;
        cout<<"Event Date = "<<date<<endl;
        cout<<"Event Location = "<<location<<endl;
    }
};
int main()
{
    Event event;
    cout<<"Enter the Event Name = ";
    getline(cin,event.eventName);

    cout<<"Enter the Event Date = ";
    getline(cin,event.date);
    cout<<"Enter the Event Location = ";
    getline(cin,event.location);
    event.eventDetails();
    return 0;
}
