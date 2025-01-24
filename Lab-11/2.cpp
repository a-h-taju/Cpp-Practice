/*You are building an e-commerce platform. Create a base class Payment with a virtual
function processPayment(). Derive two classes CreditCardPayment and PayPalPayment
that override processPayment() to handle the respective payment methods. Use function
overriding to ensure the correct payment method is invoked based on user selection.*/
#include <iostream>
#include <string>
using namespace std;

class Payment
{
public:
    virtual void processPayment()
    {
        cout << "Processing payment..." << endl;
    }
};
class CreditCardPayment : public Payment
{
public:
    void processPayment()
    {
        cout << "Processing credit card payment." << endl;
    }
};
class PayPalPayment : public Payment
{
public:
    void processPayment()
    {
        cout << "Processing PayPal payment." << endl;
    }
};
int main()
{
    int choice;

    cout << "Select payment method: \n1. Credit Card\n2. PayPal\nEnter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        CreditCardPayment creditCard;
        creditCard.processPayment();
    }
    else if (choice == 2)
    {
        PayPalPayment payPal;
        payPal.processPayment();
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
