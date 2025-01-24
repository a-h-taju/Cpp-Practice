#include <iostream>
using namespace std;

class Battery
{
private:
    int energyLevel;
public:
    Battery(int initialEnergy = 100)
    {
        energyLevel = initialEnergy;
    }
    Battery operator-()
    {
        energyLevel -= 10;

        if (energyLevel < 0)
        {
            energyLevel = 0;
        }

        return *this;
    }
    void display()
    {
        cout<<"\t Current energy level: "<<energyLevel<<"%"<<endl;
    }
};

int main()
{
    Battery robotBattery(100);
    robotBattery.display();
    cout<<"Performing action 1..."<<endl;
    -robotBattery;
    robotBattery.display();

    cout<<"Performing action 2..."<<endl;
    -robotBattery;
    robotBattery.display();

    cout<<"Performing action 3..."<<endl;
    -robotBattery;
    robotBattery.display();

    cout<<"Performing action 4..."<<endl;
    -robotBattery;
    robotBattery.display();

    cout<<"Performing action 5..."<<endl;
    -robotBattery;
    robotBattery.display();

    return 0;
}

