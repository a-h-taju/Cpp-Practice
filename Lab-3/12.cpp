/*....12....Develop a customer loyalty points system using arrays. Implement
a function that takes an array of customer points balance and updates
them based on their recent purchase amounts and bonus points.*/

#include <iostream>

using namespace std;

void updateCustomerPoints(int* customerPoints, int*purchaseAmounts, int* bonusPoints, int numCustomers)
{
    for (int i = 0; i < numCustomers; i++)
    {
        customerPoints[i] += purchaseAmounts[i] + bonusPoints[i];
    }
}

int main()
{
    int numCustomers;
    cout << "Enter the number of customers: ";

    cin >> numCustomers;

    int customerPoints[numCustomers],purchaseAmounts[numCustomers], bonusPoints[numCustomers];

    cout << "Enter customer points, purchase amounts, and bonus points:\n";
         for (int i = 0; i < numCustomers; i++)
    {
        cin >> customerPoints[i] >> purchaseAmounts[i] >> bonusPoints[i];
    }

    updateCustomerPoints(customerPoints, purchaseAmounts,bonusPoints, numCustomers);

    cout << "\nUpdated customer points:\n";
    for (int i = 0; i < numCustomers; i++)
    {
        cout << "Customer " << i + 1 << ": " << customerPoints[i] << endl;
    }

    return 0;
}
