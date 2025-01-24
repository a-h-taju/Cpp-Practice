#include <iostream>
#include <cmath>
using namespace std;

class Fraction
{
    int numerator;
    int denominator;
    int gcd(int a,int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    void reduce()
    {
        int divisor = gcd(numerator,denominator);
        numerator /= divisor;
        denominator /= divisor;
        if (denominator<0)
        {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    Fraction(int num,int denom)
    {
        numerator = num;
        denominator = denom;
        reduce();
    }
    Fraction operator+(const Fraction &other)
    {
        int new_numerator = numerator * other.denominator + other.numerator * denominator;
        int new_denominator = denominator * other.denominator;
        return Fraction(new_numerator, new_denominator);
    }
    void display()
    {
        cout<<numerator<<"/"<<denominator<<endl;
    }
};

int main()
{
    Fraction frac1(1,2);
    Fraction frac2(1,3);
    Fraction result = frac1 + frac2;
    cout<<"The result of adding the fractions is = ";
    result.display();

    return 0;
}
