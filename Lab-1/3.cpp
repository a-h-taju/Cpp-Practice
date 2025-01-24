/*....03....Develop a program that converts temperatures between
Fahrenheit and Celsius based on user input. Use functions and
conditional operators for this task.*/

#include <iostream>
using namespace std;

int main()
{
    char choice;
    float temperature,fahrenheit,celsius;

    cout << "Temperature Converter\n";
    cout << "Choose the conversion type:\n";
    cout << "F - Fahrenheit to Celsius\n";
    cout << "C - Celsius to Fahrenheit\n";
    cout << "Enter your choice (F/C): ";
    cin >> choice;

    choice = tolower(choice);

    if (choice == 'f')
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        float celsius = (fahrenheit - 32) * 5.0 / 9.0;
        cout << temperature << "°F is equal to " << celsius << "°C" <<
             endl;
    }
    else if (choice == 'c')
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        float fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout << temperature << "°C is equal to " << fahrenheit << "°F" <<
             endl;
    }
    else
    {
        cout << "Invalid choice! Please enter 'F' or 'C'." << endl;
    }
    return 0;
}
