/*Design a program for calculating areas of different shapes. Create a base class Shape with
a virtual function calculateArea(). Derive classes Rectangle and Circle, overriding the
function to calculate their respective areas. Use a base class pointer to demonstrate
polymorphism in action.*/
#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual void calculateArea()
    {
        cout << "Calculating area of shape." << endl;
    }
};
class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void calculateArea()
    {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculateArea()
    {
        double area = M_PI * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

int main()
{
    Shape* shapePtr;

    Rectangle rect(10.0, 5.0);
    shapePtr = &rect;
    shapePtr->calculateArea();

    Circle circ(7.0);
    shapePtr = &circ;
    shapePtr->calculateArea();

    return 0;
}

