#include<iostream>
using namespace std;
void calculateArea( float r)
{
    float area = 3.1416*r*r;

    cout<<"Area of Circle = "<<area;
}
void calculateArea( int l,float w)
{
    float area = l*w;

    cout<<"Area of Rectangle = "<<area;
}
void calculateArea( double b,float h)
{
    float area = 0.5*b*h;

    cout<<"Area of Triangle = "<<area;
}
int main()
{
    char unit;

    cout<<"choose the shape(c=Circle/r=Rectangle/t=Triangle) = ";
    cin>>unit;

    unit= tolower(unit);

    if(unit == 'c')
    {
        float radius;

        cout<<"Enter the circle radius = ";
        cin>>radius;
        calculateArea(radius);
    }
    else if(unit == 'r')
    {
        int length;
        float width;

        cout<<"Enter the rectangle length and width = ";
        cin>>length>>width;
        calculateArea(length,width);
    }
    else if(unit == 't')
    {
        double base;
        float height;

        cout<<"Enter the Triangle base and height = ";
        cin>>base>>height;
        calculateArea(base,height);
    }
    else

        cout<<"Invalid input!please try again.";

    return 0;
}
