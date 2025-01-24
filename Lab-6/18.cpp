/*....18....Define a class MovieTicket with attributes ticketID, movieName, and price.
 Use a parameterized constructor to initialize the ticket.
 Use a copy constructor to duplicate the ticket for group bookings.
Add member functions to calculate and display the total cost for multiple tickets.*/

#include <iostream>
#include <string>
using namespace std;

class MovieTicket
{
private:
    int ticketID;
    string movieName;
    float price;

public:
    MovieTicket(int id, string name, float p)
    {
        ticketID = id;
        movieName = name;
        price = p;
    }

    MovieTicket(const MovieTicket& other)
    {
        ticketID = other.ticketID;
        movieName = other.movieName;
        price = other.price;
    }
    float calculateTotalCost(int numberOfTickets) const
    {
        return price * numberOfTickets;
    }
    void displayTicketDetails() const
    {
        cout << "Ticket ID: " << ticketID << endl;
        cout << "Movie Name: " << movieName << endl;
        cout << "Price: $" << price << endl;
    }
};

int main()
{
    MovieTicket ticket1(101, "Inception", 12.50);

    cout << "Original Ticket Details:" << endl;
    ticket1.displayTicketDetails();

    MovieTicket ticket2 = ticket1;

    int groupSize = 5;
    float totalCost = ticket2.calculateTotalCost(groupSize);

    cout << "\nCopied Ticket Details (for group booking):" << endl;
    ticket2.displayTicketDetails();
    cout << "\nTotal cost for " << groupSize << " tickets: $" << totalCost << endl;

    return 0;
}

