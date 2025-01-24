#include <iostream>
using namespace std;

class Car
{
private:
    int speed;

public:
    Car(int s)
    {
        speed = s;
    }
    void operator--()
    {
        speed -= 10;
    }
    void displaySpeed()
    {
        cout << "Current speed: " << speed << " km/h" << endl;
    }
};

int main()
{
    Car myCar(100);

    cout << "Before braking: ";
    myCar.displaySpeed();

    --myCar;

    cout << "After braking: ";
    myCar.displaySpeed();

    return 0;
}

