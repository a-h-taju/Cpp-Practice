/*....06....Write a function to check if a number is prime. Then, use a loop to
identify and print all prime numbers between 1 and 100.*/

#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    cout << "Prime numbers between 1 and 100:\n";
    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
