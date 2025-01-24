/*....04....Write a function to compute the factorial of a given number. Apply
this function to calculate the factorial of numbers from 1 to 10.*/

#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        int result = factorial(i);
        cout << "Factorial of " << i << " is: " << result << endl;

    }

    return 0;
}
