/*....04....In a retail store inventory system, implement a program using
arrays that take the current stock quantity of products and update it
after a customer purchases a certain quantity.*/

#include <iostream>

using namespace std;

void updateStock(int &stockQuantity, int purchaseQuantity)
{
    stockQuantity -= purchaseQuantity;
}

int main()
{
    int numProducts;
    cout << "Enter the number of products: ";
    cin >> numProducts;

    int stock[numProducts];

    cout << "Enter the current stock quantity for each product:\n";
    for (int i = 0; i < numProducts; i++)
    {
        cin >> stock[i];
    }

    int purchaseQuantity;
    cout << "Enter the quantity of products purchased:\n";
    for (int i = 0; i < numProducts; i++)
    {
        cin >> purchaseQuantity;
        updateStock(stock[i], purchaseQuantity);
    }

    cout << "\nUpdated stock quantities:\n";
    for (int i = 0; i < numProducts; i++)
    {
        cout << "Product " << i + 1 << ": " << stock[i] << endl;
    }

    return 0;
}
