#include <iostream>
using namespace std;

class Distance
{
    int kilometers;
    int meters;

public:
    Distance(int km,int m)
    {
        kilometers = km;
        meters = m;
    }
    Distance operator+(Distance &dis2)
    {
        int total_meters = meters + dis2.meters;
        int extra_kilometers = total_meters / 1000;
        total_meters = total_meters % 1000;

        int totalKilometers = kilometers + dis2.kilometers + extra_kilometers;
        return Distance(totalKilometers, total_meters);
    }
    void display()
    {
        cout<<"Kilometers = "<<kilometers<<endl;
        cout<<"Meters = "<<meters<<endl;
    }
};

int main()
{
    Distance day1(8, 550);
    Distance day2(5, 2150);

    cout<<"Day 1 Distance: "<<endl;
    day1.display();
    cout<<endl;
    cout<<"Day 2 Distance: "<<endl;
    day2.display();
    cout<<endl;
    Distance total_distance = day1 + day2;

    cout<<"Total Distance Traveled: "<<endl;
    total_distance.display();

    return 0;
}
