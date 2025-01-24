/*....13....Create a class HotelBooking with attributes bookingID, customerName, and
totalAmount.
 Use a default constructor to set initial values for walk-in customers.
 Use a parameterized constructor to initialize for online bookings.
 Use a copy constructor to duplicate a booking for modifications.
  Add member functions to update room preferences and display booking details.*/

#include<iostream>
using namespace std;
class hotel
{
public:
    int bookingID;
    string customername;
    int amount;
    hotel()
    {
        cout<<"enter all details:"<<endl;
        cout<<"enter customer id "<<endl;
        cin>>bookingID;
        cout<<"enter name "<<endl;
        cin>>customername;
        cout<<"enter total amount: "<<endl;
        cin>>amount;
    }
    hotel(int id, string name, int am)
    {
        bookingID=id;
        customername=name;
        amount=am;
    }
    hotel(hotel &object)
    {
        bookingID=object.bookingID;
        customername=object.customername;
        amount=object.amount;
    }
    void update()
    {
        cout<<"room preference updated!!"<<endl;
    }
    void display()
    {
        cout<<"booking ID: "<<bookingID<<endl;
        cout<<"customer naame: "<<customername<<endl;
        cout<<"totaal amount: "<<amount<<"tk"<<endl;
    }
};
int main()
{
    hotel x;
    hotel y(11022, "sanin",1200);
    hotel z=x;
    x.display();
    y.display();
    z.display();
    z.update();
    return 0;
}
