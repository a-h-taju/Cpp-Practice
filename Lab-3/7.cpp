/*....07....Develop a temperature conversion program using arrays. Write a
function that accepts an array of temperatures in Celsius and converts
them to Fahrenheit.*/

#include <iostream>

using namespace std;

void tempConversion(float* cel, int n)
{
    for(int i = 0; i < n; i++)
    {
        cel[i] = (cel[i] * 1.8) + 32;
    }
}

int main()
{
    int n;
    cout << "Enter the number of temperatures: ";

    cin >> n;

    float cel[n];

    cout << "Enter the temperatures in Celsius: ";
    for(int i = 0; i < n; i++)
    {
        cin >> cel[i];
    }

    tempConversion(cel, n);

    cout << "Fahrenheit temperatures are: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << cel[i] << " F" << endl;
    }

    return 0;

}
