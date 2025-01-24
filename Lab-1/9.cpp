/*....09....Build a calculator program that performs addition, subtraction,
multiplication, and division using functions and conditional operators.*/

#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    return num1 + num2;
}

int subtract(int num1, int num2)
{
    return num1 - num2;
}

int multiply(int num1, int num2)
{
    return num1 * num2;

}

int divide(int num1, int num2)
{
    if (num2 == 0)
    {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return num1 / num2;
}

int main()
{
    int num1, num2, choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose an operation:\n";

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Result: " << add(num1, num2) << endl;
        break;
    case 2:
        cout << "Result: " << subtract(num1, num2) << endl;
        break;
    case 3:
        cout << "Result: " << multiply(num1, num2) << endl;
        break;
    case 4:
        cout << "Result: " << divide(num1, num2) << endl;

        break;
    default:
        cout << "Invalid choice." << endl;
    }

    return 0;
}
