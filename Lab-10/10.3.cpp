#include <iostream>
using namespace std;

class Account
{
    double balance;
public:
    Account(double initial_balance)
    {
        balance = initial_balance;
    }
    Account operator -(double amount)
    {
        {
            balance = balance - amount;
            cout << "Withdrawal balance = "<<amount<<endl;
        }
        return balance;
    }
    void displayBalance()
    {
        cout<<"Current balance: "<<balance<<endl;
    }
};

int main()
{
    double initial_balance,withdraw;

    cout<<"Enter the initial balance = ";
    cin>>initial_balance;

    Account myAccount(initial_balance);
    myAccount.displayBalance();

    cout<<"Enter the withdraw balance = ";
    cin>>withdraw;

    myAccount - withdraw;
    myAccount.displayBalance();

    return 0;
}

