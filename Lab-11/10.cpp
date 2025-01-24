/*In a travel booking system, create a base class Transport with a virtual function
bookTicket(). Derive classes Flight and Train, overriding the function to implement
booking details for each mode of transport. Demonstrate polymorphism by using a base
class pointer to handle ticket booking dynamically.*/
#include <iostream>
using namespace std;

class Transport
{
public:
    virtual void bookTicket()
    {
        cout << "Booking a transport ticket." << endl;
    }
};
class Flight : public Transport
{
public:
    void bookTicket()
    {
        cout << "Booking a flight ticket." << endl;
    }
};
class Train : public Transport
{
public:
    void bookTicket()
    {
        cout << "Booking a train ticket." << endl;
    }
};

int main()
{
    Transport *t;

    Flight flight;
    Train train;

    t = &flight;
    t = &train;

    t->bookTicket();
    t->bookTicket();
    return 0;
}
