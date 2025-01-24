/*....11....Create a program to track car maintenance using arrays. Write a
function that accepts an array of car mileages and updates them after
a service is performed.*/

#include <iostream>

using namespace std;

void updateMileageAfterService(float *mileages, int size, int additionalMileage)
{
    for (int i = 0; i < size; i++)
    {
        mileages[i] = mileages[i] + additionalMileage;
    }
}

int main()
{
    int numberOfCars;

    cout << "Enter the number of cars: ";
    cin >> numberOfCars;

    float mileages[numberOfCars];

    for (int i = 0; i < numberOfCars; i++)
    {
        cout << "Enter the current mileage for car " << i + 1 << ": ";
        cin >> mileages[i];
    }

    int addMileage;
    cout << "Enter the additional mileage to add after the service: ";
    cin >> addMileage;

    updateMileageAfterService(mileages, numberOfCars, addMileage);

    cout << "\nUpdated mileages after service:\n";
    for (int i = 0; i < numberOfCars; i++)
    {

        cout << "Car " << i + 1 << ": " << mileages[i] << " miles\n";
    }

    return 0;
}
