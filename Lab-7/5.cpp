/*....05....Create a class named BankAccount with a data member to store the account balance.
Create another class named SavingsAccount that inherits from the BankAccount class
and has a data member to store the interest rate of the account. Write a program to
create a SavingsAccount object and print out its account balance and interest rate.*/

#include <iostream>
#include <string>
using namespace std;

class bank_account
{
protected:
    int balance;
public:
    bank_account()
    {
        cout<<"Enter the account balance = ";
        cin>>balance;
    }
};
class savings_account : public bank_account
{
protected:
    string interest_rate;
public:
    savings_account()
    {
        cout<<"Enter interest rate of the account = ";
        cin>>interest_rate;
    }
    void display()
    {
        cout<<"account balance= "<<balance<<endl;
        cout<<"interest rate of the account = "<<interest_rate<<endl;
    }
};
int main()
{
    savings_account Savings_account;
    cout<<endl;
    Savings_account.display();
    return 0;
}

