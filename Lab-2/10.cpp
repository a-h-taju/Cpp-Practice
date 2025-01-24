/*....10....For each integer n in the interval [a, b](given as input):

 If 1<=n<=9, then print the English representation of it in lowercase. That is
 1 for "one",2 for "two" and so on.
 Else if n>9 and it is an even number, then print "even".
 Else if n>9 and it is an odd number, then print "odd".

Input Format:
The first line contains an integer, 5
The second line contains an integer, 11

Sample Output:
five
six
seven
eight
nine
even
odd
*/

#include <iostream>

using namespace std;

void NumberToWord(int n)
{
    if (n >= 1 && n <= 9)
    {
        switch (n)
        {
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five" << endl;
            break;
        case 6:

            cout << "six" << endl;
            break;
        case 7:
            cout << "seven" << endl;
            break;
        case 8:
            cout << "eight" << endl;
            break;
        case 9:
            cout << "nine" << endl;
            break;
        }
    }
    else if (n > 9 && n % 2 == 0)
    {
        cout << "even" << endl;
    }
    else if (n > 9 && n % 2 != 0)
    {
        cout << "odd" << endl;
    }
}

int main()
{
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    for (int n = a; n <= b; ++n)
    {
        NumberToWord(n);
    }

    return 0;
}

