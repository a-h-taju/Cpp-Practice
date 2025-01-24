/*....09....You are managing a restaurant and need to keep track of the orders
placed by different customers. Create a class called "Customer" with
attributes for customer name and order details. Implement member
functions to add an order and display the customer details. Create an
array of 7 Customer objects and print the details of all customers
along with their orders.*/

#include <iostream>
#include <string>
using namespace std;
class Customer
{
private:
    string name;
    string orderDetails;
public:
    Customer(string customerName)
    {
        name = customerName;
        orderDetails = "";
    }
    void addOrder(string order)
    {
        orderDetails = order;
    }
    string getName() const
    {
        return name;
    }
    string getOrderDetails() const
    {

        return orderDetails;
    }
    void displayDetails() const
    {
        cout << "Customer: " << name << ", Order: " << orderDetails <<
             endl;
    }
};
int main()
{
    Customer customers[7] =
    {
        Customer("John Doe"),
        Customer("Jane Smith"),
        Customer("Sam Brown"),
        Customer("Alice White"),
        Customer("Bob Green"),
        Customer("Charlie Black"),
        Customer("Emily Blue")
    };
    for (int i = 0; i < 7; ++i)
    {
        string order;
        cout << "Enter order for " << customers[i].getName() << ": ";
        cin.ignore();
        getline(cin, order);
        customers[i].addOrder(order);
    }
    cout << "\nCustomer Order Details:\n";
    for (int i = 0; i < 7; ++i)
    {
        customers[i].displayDetails();
    }

    return 0;
}
