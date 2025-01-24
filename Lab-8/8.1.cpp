#include<iostream>
using namespace std;

double convertTemperature(double celsius);
float convertTemperature(float fahrenheit);

int main()
{
    char unit;

    cout<<"choose the temperature converter(c/f) = ";
    cin>>unit;

    unit= tolower(unit);

    if(unit == 'c')
    {
        double temp;
        cout<<"Enter the celsius temperature = ";
        cin>>temp;

        double fahrenheit = convertTemperature(temp);

        cout<<" fahrenheit temperature = "<<fahrenheit;
    }
    else if(unit == 'f')
    {
        float temp;
        cout<<"Enter the fahrenheit temperature = ";
        cin>>temp;

        float celsius = convertTemperature(temp);

        cout<<" celsius temperature = "<<celsius;
    }
    else

        cout<<"Invalid temperature!please try again.";

        return 0;
}
double convertTemperature(double celsius)
{
    return (9*celsius/5)+32;
}
float convertTemperature(float fahrenheit)
{
    return(((fahrenheit-32)*5.0)/9.0);
}
