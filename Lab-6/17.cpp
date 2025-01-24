/*....17....Write a class Payment with attributes transactionID, amount, and status.
 Use constructor overloading to initialize either with transactionID or with all
attributes.
 Use a destructor to delete sensitive transaction data after processing.
Add member functions to check and display payment status.*/

#include<iostream>
using namespace std;
class Payment
{
public:
    int transactionID;
    int amount;
    bool status;
    Payment(int id, int am, bool stat)
    {
        transactionID = id;
        amount = am;
        status = stat;
    }
    Payment(int id)
    {
        transactionID = id;
        cout<<"Enter amount: ";
        cin>>amount;
        cout<<"Enter status: ";
        cin>>status;
    }
    ~Payment() {}
    void display()
    {
        if(status)
            cout<<"Payment of tk: "<<amount<<" with transaction id: "<<transactionID<<" was successfull!"<<endl;
        else
            cout<<"Payment of tk: "<<amount<<" with transaction id: "<<transactionID<<" was unsuccessfull."<<endl;
    }
};
int main()
{
    Payment pay1(123, 2000, true);
    Payment pay2(124, 2000, false);
    Payment pay3(125);
    pay1.display();
    pay2.display();
    pay3.display();

    return 0;
}
