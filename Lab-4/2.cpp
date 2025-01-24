/*....02....You are building a banking application and need to create a class
called "Account" in C++. The Account class should have attributes for
account number, account holder name, and balance.
Implement member functions to:
1. Deposit funds into the account.
2. Withdraw funds from the account.
3. Get the current balance of the account.
Create an instance of the Account class with account
number="123456", account holder
name="John Doe", and initial balance=1000. Perform a deposit of 500,
followed by a withdrawal of 200. Finally, retrieve the current balance
and print the result.*/

#include<iostream>

using namespace std;

class account
{
private:
    int acc,balance=1000;
    string holderName;
public:

    void getdata()
    {
        cout<<"Enter the Account number= ";
        cin>>acc;
        cout<<"Enter the Account holder name= ";
        cin>>holderName;
    }
    void putdata()
    {
        cout<<"The Account number= "<<acc<<endl;
        cout<<"The Account holder name= "<<holderName<<endl;
    }
    void deposit(int x)
    {
        if(x>0)
        {
            balance+=x;
            cout<<"The deposit Account balance= "<<x<<endl;
        }
        else

            cout<<"Insufficient deposit balance"<<endl;
    }
    void withdraw(int x)
    {
        if(x>0 && x<=balance)
        {
            balance-=x;
            cout<<"Withdraw="<<x<<endl;
        }
        else
            cout<<"Invalid withdraw balance"<<endl;
    }
    int currentBalance()
    {
        return balance ;
    }
};
int main()
{
    account johnAccount;

    johnAccount.getdata();
    johnAccount.putdata();
    johnAccount.deposit(500);
    johnAccount.withdraw(200);
    johnAccount.currentBalance();
    cout<<"Current balance="<<johnAccount.currentBalance()<<endl;
    return 0;
}
