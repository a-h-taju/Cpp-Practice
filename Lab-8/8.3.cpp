#include<iostream>
using namespace std;
void processString( float l)
{
    float Volume = l*l*l;

    cout<<"Volume of cube = "<<Volume;
}
void processString( int r,float h)
{
    float Volume = 3.1416*r*r*h;

    cout<<"Volume of cylinder = "<<Volume;
}
void processString( double l,float w,int h)
{
    float Volume = l*w*h;

    cout<<"Volume of Rectangular = "<<Volume;
}
int main()
{
    char unit;

    cout<<"choose the shape(c=cube/y=cylinder/t=Triangle) = ";
    cin>>unit;

    unit= tolower(unit);

    if(unit == 'c')
    {
        float length;

        cout<<"Enter the cube length = ";
        cin>>length;
        processString(length);
    }
    else if(unit == 'y')
    {
        int radius;
        float height;

        cout<<"Enter the cylinder radius and height = ";
        cin>>radius>>height;
        processString(radius,height);
    }
    else if(unit == 't')
    {
        double length;
        float width;
        int height;

        cout<<"Enter the rectangle height,width and height = ";
        cin>>length>>width>>height;
        processString(length,width,height);
    }
    else

        cout<<"Invalid input!please try again.";

    return 0;
}

