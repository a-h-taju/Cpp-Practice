#include<iostream>
using namespace std;
class Account
{
    double balance,daily_interest;
public:
    Account(double x,double y)
    {
        balance = x;
        daily_interest = y;
    }
    void operator ++()
    {
        double Add = balance +  (balance * daily_interest / 100);
        cout<<"Balance Grow = "<<Add;
    }
};
int main()
{
    double balance,daily_interest;
    cout<<"Enter the Balance = ";
    cin>>balance;

    cout<<"Enter the daily interest = ";
    cin>>daily_interest;

    Account a(balance,daily_interest);
    ++a;

    return 0;
}

