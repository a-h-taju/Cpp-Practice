/*....02....Create a function that identifies whether a given integer is even or
odd. Then, utilize a loop to analyze a list of numbers and print
whether each number is even or odd.*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of last number (1 to n): ";
    cin >> n;

    for(int i=1; i<=n; i++)

    {

        if (i % 2 == 0)
        {
            cout<<"Even Number"<<endl;
        }

        else
        {
            cout<< "Odd Number"<<endl;
        }

    }

    return 0;
}
