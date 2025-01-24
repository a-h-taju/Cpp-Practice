#include<iostream>
using namespace std;

void convertCurrency(long long a)
{
    cout<<a<<" Dollars "<<" = "<<a*0.96<<" Euros "<<endl;
}
void convertCurrency(float a)
{
    cout<<a<<" Euros "<<" = "<<a*(1.0/0.96)<<" Dollars "<<endl;
}
void convertCurrency(double a)
{
    cout<<a<<" Dollars "<<" = "<<a*0.80<<" British pounds "<<endl;
}
int main()
{
    long long dollar;
    float euro;
    double dollars;

    cout<<"Enter the Dollars = ";
    cin>>dollar;
    convertCurrency(dollar);
    cout<<endl;
    cout<<"Enter the Euros = ";
    cin>>euro;
    convertCurrency(euro);
    cout<<endl;
    cout<<"Enter the Dollars = ";
    cin>>dollars;
    convertCurrency(dollars);

    return 0;
}
