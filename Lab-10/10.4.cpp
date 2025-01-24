#include<iostream>
using namespace std;

class Complex
{
    int real,img;
public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int a,int b)
    {
        real = a;
        img = b;
    }
    Complex operator + (Complex &com2)
    {
        Complex temp;
        temp.real = real + com2.real;
        temp.img = img + com2.img;
        return temp;
    }
    Complex operator - (Complex &com2)
    {
        Complex temp;
        temp.real = real - com2.real;
        temp.img = img - com2.img;
        return temp;
    }
    void display()
    {
        if(img>0)
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }
        else
        {
            cout<<real<<" - "<<img<<"i"<<endl;
        }
    }
};
int main()
{
    Complex c1(30,15);
    Complex c2(20,10);

    cout<<"First complex number = ";
    c1.display();
    cout<<"Second complex number = ";
    c2.display();
    cout<<endl;
    Complex add = c1 + c2;
    Complex sub = c1 - c2;
    cout<<"Addition = ";
    add.display();
    cout<<endl;
    cout<<"Subtraction = ";
    sub.display();

    return 0;
}
