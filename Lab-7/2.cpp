/*....02....Create a class named Shape with data members to store the width and height of a
shape. Create another class named Rectangle that inherits from the Shape class and
has a method to calculate the area of the rectangle. Write a program to create a
Rectangle object and print out its area.*/

#include <iostream>
using namespace std;

class Shape
{
protected:
    float width,height;
public:
    Shape()
    {
        cout<<"Enter the width and height are = ";
        cin>>width>>height;
    }
};
class Rectangle : public Shape
{
protected:
    float area;
public:
    Rectangle()
    {
        area = width * height;
    }
    void display_area()
    {
        cout<<"Area of Rectangle = "<<area<<endl;
    }
};
int main()
{
    Rectangle rectangle;
    rectangle.display_area();
    return 0;
}
