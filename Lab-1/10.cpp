/*....10....Write a program that calculates income tax based on the user's
income bracket. Utilize if-else statements and functions for this
computation.Table is given in question*/

#include <iostream>
using namespace std;
double calculate_tax(double income, double tax_percentage)
{
    return (income * tax_percentage) / 100;
}
int main()
{
    double total_income, tax_paid = 0;
    cout << "Enter your total income: ";
    cin >> total_income;

    if (total_income <= 300000)
    {
    }
    else if (total_income <= 400000)
    {
        tax_paid += calculate_tax(100000, 5);
        total_income -= 300000;
    }
    else if (total_income <= 700000)
    {
        tax_paid += calculate_tax(100000, 5) + calculate_tax(300000, 10);
        total_income -= 700000;
    }
    else if (total_income <= 1100000)
    {
        tax_paid += calculate_tax(100000, 5) + calculate_tax(300000, 10) +
                    calculate_tax(400000, 15);
        total_income -= 1100000;
    }

    else if (total_income <= 1600000)
    {
        tax_paid += calculate_tax(100000, 5) + calculate_tax(300000, 10) +
                    calculate_tax(400000, 15) + calculate_tax(500000, 20);
        total_income -= 1600000;
    }
    else
    {
        tax_paid += calculate_tax(100000, 5) + calculate_tax(300000, 10) +
                    calculate_tax(400000, 15) + calculate_tax(500000, 20) +
                    calculate_tax(total_income, 25);
    }
    cout << "Your income tax is: " << tax_paid << endl;
    return 0;
}


