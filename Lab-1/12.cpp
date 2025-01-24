/*....12....Develop a menu-driven program that allows the user to select
options for calculating area, perimeter, or volume of different shapes.
Use functions, if-else statements, and user input for interaction.*/

#include <iostream>
#include <cmath>

using namespace std;

// Function declarations
void calculateArea();
void calculatePerimeter();
void calculateVolume();

double rectangleArea(double length, double width);
double circleArea(double radius);
double triangleArea(double base, double height);

double rectanglePerimeter(double length, double width);

double circlePerimeter(double radius);
double trianglePerimeter(double side1, double side2, double side3);

double cubeVolume(double side);
double cylinderVolume(double radius, double height);
double sphereVolume(double radius);

int main()
{
    int choice;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Calculate Area\n";
        cout << "2. Calculate Perimeter\n";
        cout << "3. Calculate Volume\n";
        cout << "4. Exit\n";
        cout << "Select an option (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            calculateArea();
            break;
        case 2:
            calculatePerimeter();
            break;
        case 3:
            calculateVolume();
            break;
        case 4:
            cout << "Exiting the program. Goodbye!\n";
            break;
        default:
            cout << "Invalid option. Please try again.\n";
        }
    }
    while (choice != 4);

    return 0;
}

void calculateArea()
{
    int shape;
    cout << "\nSelect shape to calculate area:\n";
    cout << "1. Rectangle\n";
    cout << "2. Circle\n";
    cout << "3. Triangle\n";
    cout << "Select an option (1-3): ";
    cin >> shape;

    double length, width, radius, base, height;

    switch (shape)
    {
    case 1:
        cout << "Enter length: ";

        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        cout << "Area of Rectangle: " << rectangleArea(length, width) <<
             endl;
        break;
    case 2:
        cout << "Enter radius: ";
        cin >> radius;
        cout << "Area of Circle: " << circleArea(radius) << endl;
        break;
    case 3:
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
        cout << "Area of Triangle: " << triangleArea(base, height) << endl;
        break;
    default:
        cout << "Invalid option.\n";

    }
}

void calculatePerimeter()
{
    int shape;
    cout << "\nSelect shape to calculate perimeter:\n";
    cout << "1. Rectangle\n";
    cout << "2. Circle\n";
    cout << "3. Triangle\n";
    cout << "Select an option (1-3): ";
    cin >> shape;

    double length, width, radius, side1, side2, side3;

    switch (shape)
    {
    case 1:
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;
        cout << "Perimeter of Rectangle: " << rectanglePerimeter(length,
                width) << endl;
        break;
    case 2:
        cout << "Enter radius: ";
        cin >> radius;
        cout << "Perimeter of Circle: " << circlePerimeter(radius) << endl;
        break;
    case 3:
        cout << "Enter side 1: ";
        cin >> side1;
        cout << "Enter side 2: ";
        cin >> side2;
        cout << "Enter side 3: ";
        cin >> side3;
        cout << "Perimeter of Triangle: " << trianglePerimeter(side1, side2,
                side3) << endl;
        break;

    default:
        cout << "Invalid option.\n";
    }
}

void calculateVolume()
{
    int shape;
    cout << "\nSelect shape to calculate volume:\n";
    cout << "1. Cube\n";
    cout << "2. Cylinder\n";
    cout << "3. Sphere\n";
    cout << "Select an option (1-3): ";
    cin >> shape;

    double side, radius, height;

    switch (shape)
    {
    case 1:

        cout << "Enter side length: ";
        cin >> side;
        cout << "Volume of Cube: " << cubeVolume(side) << endl;
        break;
    case 2:
        cout << "Enter radius: ";
        cin >> radius;
        cout << "Enter height: ";
        cin >> height;
        cout << "Volume of Cylinder: " << cylinderVolume(radius, height)
             << endl;
        break;
    case 3:
        cout << "Enter radius: ";
        cin >> radius;
        cout << "Volume of Sphere: " << sphereVolume(radius) << endl;
        break;
    default:
        cout << "Invalid option.\n";
    }

}
// Area calculations
double rectangleArea(double length, double width)
{
    return length * width;
}
double circleArea(double radius)
{
    return M_PI * radius * radius;
}
double triangleArea(double base, double height)
{
    return 0.5 * base * height;
}
// Perimeter calculations
double rectanglePerimeter(double length, double width)
{
    return 2 * (length + width);
}
double circlePerimeter(double radius)

{
    return 2 * M_PI * radius;
}
double trianglePerimeter(double side1, double side2, double side3)
{
    return side1 + side2 + side3;
}
// Volume calculations
double cubeVolume(double side)
{
    return pow(side, 3);
}
double cylinderVolume(double radius, double height)
{
    return M_PI * radius * radius * height;
}
double sphereVolume(double radius)
{
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}
