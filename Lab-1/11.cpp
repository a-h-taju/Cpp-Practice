/*....11....Implement a function that computes the result of raising a
number to a given power. Then, apply this function to calculate
powers for various numbers and exponents.*/

#include <iostream>
#include <iomanip>
using namespace std;
double power(double base, int exponent)
{
    double result = 1.0;
    bool isNegativeExponent = (exponent < 0);
    if (isNegativeExponent)
    {
        exponent = -exponent;
    }
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    if (isNegativeExponent)
    {
        return 1.0 / result;
    }
    return result;
}
int main()
{
    double baseValues[] = {2.0, 3.0, 4.5, 5.0};
    int exponentValues[] = {0, 1, 2, 3, -1, -2};
    cout << fixed << setprecision(4);
    cout << "Base\tExponent\tResult\n";
    cout << "-------------------------------------\n";
    for (double base : baseValues)
    {
        for (int exponent : exponentValues)
        {
            double result = power(base, exponent);
            cout << base << "\t" << exponent << "\t\t" << result << endl;
        }

    }
    return 0;
}
