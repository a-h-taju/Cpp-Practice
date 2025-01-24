#include<iostream>
#include<cmath>
using namespace std;

int calculate(int a,int b)
{
    return a+b;
}
float calculate(float c,float d)
{
    return c*d;
}
double calculate(double e,int f)
{
    return pow(e,f);
}
int main()
{
    int a,b,f;
    float c,d;
    double e;

    cout<<"Enter adding two number = ";
    cin>>a>>b;

    int sum = calculate(a,b);

    cout<<"Enter multipling two number = ";
    cin>>c>>d;

    float multi = calculate(c,d);

    cout<<"Enter a base and exponent = ";
    cin>>e>>f;

    double raise = calculate(e,f);

    cout<<a<<"+"<<b<<"="<<sum<<endl;
    cout<<c<<"*"<<d<<"="<<multi<<endl;
    cout<<e<<" ^ "<<f<<"="<<raise<<endl;

    return 0;
}
