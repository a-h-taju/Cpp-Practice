/*....05....Write a program in C++ to print a multiplication table n using while loop.
where the value of n is inputted by the user.*/

#include <iostream>

using namespace std;

void printMultiplicationTable(int n)
{
    int i = 1;

    while (i <= 10)
    {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }
}

int main()
{
    int n;

    cout << "Enter a number to print its multiplication table: ";
    cin >> n;

    printMultiplicationTable(n);

    return 0;
}
