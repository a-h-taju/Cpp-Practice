#include<iostream>
using namespace std;
class Vector
{
    double force;
public:
    Vector( double f)
    {
        force = f;
    }
    void operator - ()
    {
        force = - force;
        cout<<"force = "<<force;
    }
};
int main()
{
    double f;
    cout<<"Enter the force = ";
    cin>>f;
    Vector v(f);
    -v;
    return 0;
}

