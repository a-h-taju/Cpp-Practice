/*....06....Design a class Room with attributes roomNumber, roomType, and
rate. Use a constructor with a default argument to initialize the rate
based on the room type. Add member functions to calculate the bill for
a given number of days and display the booking details.*/

#include <iostream>
#include <string>

using namespace std;

class Room
{
public:
    int roomNumber;
    string roomType;
    double rate;

    Room(int number, string type, double r = 0.0)
    {
        roomNumber = number;
        roomType = type;

        if (type == "luxuary")
        {
            rate = 5000.0;
        }
        else if (type == "Single")
        {
            rate = 3000.0;
        }
        else if (type == "double")
        {
            rate = 2000.0;
        }
        else
        {
            rate = r;
        }
    }
    double calculate_bill(int days)
    {
        return rate * days;
    }
    void displayDetails()

    {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Room Type: " << roomType << endl;
        cout << "Rate per day: " << rate << endl;
    }
};

int main()
{
    Room room1(101, "luxuary");
    Room room2(202, "Single");
    Room room3(303, "double");

    int days = 5;

    room1.displayDetails();
    cout << "Total Bill: " << room1.calculate_bill(days) << endl << endl;

    room2.displayDetails();
    cout << "Total Bill: " << room2.calculate_bill(days) << endl << endl;

    room3.displayDetails();

    cout << "Total Bill: " << room3.calculate_bill(days) << endl;

    return 0;
}
