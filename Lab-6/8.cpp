/*....08....Define a class Event with attributes eventID, eventName, and eventDate. Overload
constructors to register an event with only the name or with all attributes. Add a member
function to check if the event is scheduled within the next month.*/

#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class Event
{
public:
    int eventID;
    string eventName;
    string eventDate;
    Event(int id, string name, string date)
    {
        eventID = id;
        eventName = name;
        eventDate = date;
    }
    Event(string name)
    {
        eventID = 0;
        eventName = name;
        eventDate = "30-07-2024";
    }
    void isScheduledWithinNextMonth()
    {
        if(eventDate[3]=='0' && eventDate[4]=='8')
            cout<<"The event is within next month."<<endl;
        else
            cout<<"The event is not within next month."<<endl;
    }
    void displayEventDetails()
    {
        cout << "Event ID: " << eventID << "\nEvent Name: " << eventName << "\nEvent Date: " << eventDate << endl;
    }
};
int main()
{
    Event event1(1, "Conference", "15-08-2024");
    Event event2("Birthday Party");
    event1.displayEventDetails();
    event2.displayEventDetails();
    event1.isScheduledWithinNextMonth();
    event2.isScheduledWithinNextMonth();
    return 0;
}
