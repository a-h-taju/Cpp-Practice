/*....02....The factorial of an integer m is the product of consecutive integers from 1 to
m. that is Factorial m = m! = m*(m-1)*.....................*1. Write a program in C++
that computes and print the result for any given m.*/

#include <iostream>

using namespace std;

int factorial(int m)
{
    if (m == 0 || m == 1)
    {
        return 1;
    }
    else
    {
        return m * factorial(m - 1);
    }
}

int main()
{
    int m;
    cout << "Enter a positive integer: ";
    cin >> m;

    if (m < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;

    }
    else
    {
        int result = factorial(m);
        cout << "The factorial of " << m << " is " << result << endl;
    }

    return 0;
}
