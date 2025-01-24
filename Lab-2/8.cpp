/*....08....The numbers in the sequence 1 1 2 3 5 8 13 21......................... are called
Fibonacci numbers. Write a program in C++ using a for loop to calculate and
print the Fibonacci numbers.*/

#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
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
        cout << fibonacci(i) << " ";
    }

    cout << endl;

    return 0;
}
