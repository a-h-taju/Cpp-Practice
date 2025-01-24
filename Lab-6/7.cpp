/*....07....Write a class BankAccount with attributes accountNumber, holderName, and
initialBalance. Overload the constructor to allow creating an account with or without an
initial balance. Add member functions to perform deposits, withdrawals, and display the
account details.*/

#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
public:
    int accountNumber;
    string holderName;
    double balance;
    BankAccount(int accNumber, string name, double initialBalance)
    {
        accountNumber = accNumber;
        holderName = name;
        balance = initialBalance;
    }
    BankAccount(int accNumber, string name)
        : accountNumber(accNumber), holderName(name), balance(0.0) {}
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: Tk" << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: Tk" << amount << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }
    void displayAccountDetails() const
    {
        cout << "Account Number: " << accountNumber << "\nHolder Name: " << holderName
             << "\nBalance: Tk" << balance << endl;
    }
};
int main()
{
    BankAccount account1(12345, "Alice", 500.0);
    BankAccount account2(67890, "Bob");
    account1.displayAccountDetails();
    account2.displayAccountDetails();
    account1.deposit(100.0);
    account1.withdraw(50.0);
    account1.displayAccountDetails();
    account2.deposit(200.0);
    account2.withdraw(100.0);
    account2.displayAccountDetails();
    return 0;
}
