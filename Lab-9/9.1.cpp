#include<iostream>
using namespace std;
class Temperature
{
    double celsius;
public:
    Temperature(double x)
    {
        celsius = x;
    }
    void operator - ()
    {
        double temp = ((celsius*9.0)/5.0) + 32;
        cout<<"Fahrenheit temp = "<<temp;
    }
};
int main()
{
    double celsius,cel;
    cout<<"Enter the Celsius = ";
    cin>>celsius;

    Temperature t(celsius);
    -t;

    return 0;
}

