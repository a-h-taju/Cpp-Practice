/*....15....Design a class EWallet with attributes walletID, ownerName, and balance.
 Use a parameterized constructor to initialize the wallet with an initial deposit.
 Use a copy constructor to create a backup of the wallet details.
 Use a destructor to clear sensitive data when the wallet object is destroyed.
Add member functions to add and withdraw money, and display wallet status.*/

#include <iostream>
using namespace std;
class EWallet
{
private:
    string walletID;
    string ownerName;
    double balance;
public:
    EWallet( string id, string owner, double initialDeposit)
    {
        walletID=id;
        ownerName=owner;
        balance=initialDeposit;
    }
    EWallet( EWallet &other)
    {
        cout<<"enter all details: "<<endl;
        cout<<"enter wallet Id: "<<endl;
        cin>>walletID;
        cout<<"enter oowner naame: "<<endl;
        cin>>ownerName;
        cout<<"enter fare: "<<endl;
        cin>>balance;
    }
    ~EWallet()
    {
        cout << "EWallet with ID: " << walletID << " destroyed. Sensitive data cleared.\n";
    }
    void addMoney(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Added " << amount << " to wallet. New balance: " << balance << "\n";
        }
        else
        {
            cout << "Invalid amount. Cannot add money.\n";
        }
    }
    void withdrawMoney(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrew " << amount << " from wallet. New balance: " << balance << "\n";
        }
        else
        {
            cout << "Invalid or insufficient balance. Cannot withdraw money.\n";
        }
    }
    void displayStatus() const
    {
        cout << "Wallet ID: " << walletID
             << ", Owner: " << ownerName
             << ", Balance: " << balance << "\n";
    }
};
int main()
{
    EWallet wallet1("W123", "John Doe", 500);
    wallet1.displayStatus();
    wallet1.addMoney(200);
    wallet1.withdrawMoney(100);
    EWallet walletBackup = wallet1;
    walletBackup.displayStatus();
    return 0;
}
