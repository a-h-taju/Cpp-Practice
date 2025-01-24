/*....05....Build a C++ program to manage bank accounts using arrays. Write a
function that accepts an array of account balances and updates the
account balance after a withdrawal or deposit operation.*/

#include <iostream>

using namespace std;

void updateAccountBalance(double& accountBalance, double amount,
                          char operation)
{
    if (operation == 'D' || operation == 'd')
    {
        accountBalance += amount;
        cout << "Deposit successful. New balance: " << accountBalance <<
             endl;
    }
    else if (operation == 'W' || operation == 'w')
    {
        if (amount <= accountBalance)
        {

            accountBalance -= amount;
            cout << "Withdrawal successful. New balance: " <<
                 accountBalance << endl;
        }
        else
        {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        }
    }
    else
    {
        cout << "Invalid operation. Please enter 'D' for deposit or 'W' for withdrawal." << endl;
    }
}

int main()
{
    const int numAccounts = 3;
    double accountBalances[numAccounts] = {1000.0, 500.0, 2000.0};

    for (int i = 0; i < numAccounts; i++)
    {
        cout << "Account " << i + 1 << " balance: " << accountBalances[i] <<
             endl;
    }

    int accountIndex;
    double amount;
    char operation;

    cout << "Enter the account index (1-" << numAccounts << "): ";
    cin >> accountIndex;

    if (accountIndex >= 1 && accountIndex <= numAccounts)
    {
        accountIndex--;
        cout << "Enter the amount (deposit or withdrawal): ";
        cin >> amount;

        cout << "Enter the operation (D for deposit, W for withdrawal): ";
        cin >> operation;

        updateAccountBalance(accountBalances[accountIndex], amount,
                             operation);

        cout << "Updated account balances:" << endl;
        for (int i = 0; i < numAccounts; i++)
        {
            cout << "Account " << i + 1 << " balance: " << accountBalances[i]
                 << endl;
        }
    }
    else
    {
        cout << "Invalid account index." << endl;
    }

    return 0;
}
