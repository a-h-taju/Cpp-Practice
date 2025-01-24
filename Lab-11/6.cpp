/*You are developing a banking system. Create a base class BankAccount with a virtual
function calculateInterest(). Derive classes SavingsAccount and CurrentAccount,
overriding the function to calculate interest differently. Demonstrate runtime
polymorphism by calling the appropriate calculateInterest() method.*/
#include <iostream>
using namespace std;

class BankAccount
{
public:
    virtual void calculateInterest()
    {
        cout << "Base class calculateInterest method called." << endl;
    }
};
class SavingsAccount : public BankAccount
{
public:
    void calculateInterest()
    {
        cout << "SavingsAccount: Calculating interest at 4% per annum." << endl;
    }
};
class CurrentAccount : public BankAccount
{
public:
    void calculateInterest()
    {
        cout << "CurrentAccount: No interest applicable." << endl;
    }
};

int main()
{
    SavingsAccount savingsAccount;
    CurrentAccount currentAccount;

    BankAccount* account;

    cout << "Creating a SavingsAccount object:\n";
    account = &savingsAccount;
    account->calculateInterest();

    cout << "\nCreating a CurrentAccount object:\n";
    account = &currentAccount;
    account->calculateInterest();

    return 0;
}
