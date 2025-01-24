/*....10....Design an online shopping cart program using arrays. Implement a
function that takes an array of product prices and applies a discount
based on a given percentage.*/

#include <iostream>

using namespace std;

void applyDiscount(double *prices, int SIZE, double
                   discountPercentage)
{
    for (int i = 0; i < SIZE; i++)
    {
        prices[i] = prices[i] - (prices[i] * discountPercentage / 100);
    }
}
int main()
{
    int SIZE;

    cout << "Enter the number of products: ";

    cin >> SIZE;

    double prices[SIZE];
    cout << "Enter the prices of the products:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Product [" << i + 1 << "] = ";
        cin >> prices[i];
    }
    cout << "Original prices: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << prices[i] << " ";
    }
    cout << endl;
    double discountPercentage;
    cout << "Enter discount percentage: ";
    cin >> discountPercentage;

    applyDiscount(prices, SIZE, discountPercentage);

    cout << "Prices after " << discountPercentage << "% discount: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << prices[i] << " ";
    }
    cout << endl;

    return 0;
}
