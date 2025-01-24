/*....07....You are designing a racing game and want to keep track of the lap
times of different cars. Create a class called "Car" with attributes for
car brand and lap time. Implement member functions to update the
lap time and display the car details. Create an array of 6 Car objects
and print the details of all cars along with their fastest lap times.*/

#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
    string brand;
    double lapTime;
public:
    Car(string carBrand)
    {
        brand = carBrand;
        lapTime = 0.0;
    }
    void updateLapTime(double newLapTime)
    {
        lapTime = newLapTime;
    }
    double getLapTime() const
    {
        return lapTime;
    }
    string getBrand() const
    {
        return brand;

    }
    void displayDetails() const
    {
        cout << "Car Brand: " << brand << ", Lap Time: " << lapTime << "seconds" << endl;
    }
};
int main()
{
    Car cars[6] =
    {
        Car("Ferrari"),
        Car("Lamborghini"),
        Car("Porsche"),
        Car("McLaren"),
        Car("Bugatti"),
        Car("Aston Martin")
    };
    for (int i = 0; i < 6; ++i)
    {
        double lapTime;
        cout << "Enter lap time for " << cars[i].getBrand() << ": ";
        cin >> lapTime;
        cars[i].updateLapTime(lapTime);
    }
    int fastestCarIndex = 0;
    double fastestLapTime = cars[0].getLapTime();
    for (int i = 1; i < 6; ++i)
    {
        if (cars[i].getLapTime() < fastestLapTime)
        {
            fastestLapTime = cars[i].getLapTime();
            fastestCarIndex = i;

        }
    }
    cout << "\nCar Details with Fastest Lap Times:\n";
    for (int i = 0; i < 6; ++i)
    {
        cars[i].displayDetails();
    }
    cout << "\nThe car with the fastest lap time is " <<
         cars[fastestCarIndex].getBrand()
         << " with a lap time of " << fastestLapTime << " seconds." << endl;
    return 0;
}
