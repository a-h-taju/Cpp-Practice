/*....07....Create a class named Shape with data members to store the width and height of a
shape. Create another class named Color with a data member to store the color of a
shape. Create a third class named ColoredShape that inherits from both the Shape and
Color classes and has a method to print out the width, height, and color of the shape.
Write a program to create a ColoredShape object and print out its width, height, and
color.*/

#include<iostream>
#include<string>
using namespace std;

class Shape
{
protected:
    float width,height;
public:
    Shape()
    {
        cout<<"Enter the width = ";
        cin>>width;
        cout<<"Enter the height = ";
        cin>>height;
    }
};
class Color
{
protected:
    string color;
public:
    Color()
    {
        cout<<"Enter the Color = ";
        cin>>color;
    }
};
class Colored_shape : public Shape,public Color
{
public:
    void display()
    {
        cout<<"Width : "<<width<<endl;
        cout<<"Height : "<<height<<endl;
        cout<<"Color : "<<color<<endl;
    }
};
int main()
{
    Colored_shape s;
    cout<<endl;
    s.display();
    return 0;
}

