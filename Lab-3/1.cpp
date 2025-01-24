/*....01....The Fibonacci Series is the series where the next term is the sum of the previous two terms. For Example: 0, 1, 1, 2, 3, 5, 5, , n .....Write a program to print the Fibonacci series using call by reference.
N.B. The output will be written in the main function.*/

#include <iostream>

using namespace std;

inline void fibonacci(int n, int &result)
{
    if (n <= 1)
    {
        result = n;
    }
    else
    {
        int first = 0, second = 1;
        for (int i = 2; i <= n; i++)
        {

            result = first + second;
            first = second;
            second = result;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;
    cout << "The first " << n << " Fibonacci numbers are: ";

    for (int i = 0; i < n; i++)
    {
        int result = 0;
        fibonacci(i, result);
        cout << result << " ";
    }

    return 0;
}
