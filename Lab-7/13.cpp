/*....13....We want to store the information about different vehicles. Create a class named
Vehicle with two data members named mileage and price. Create its two subclasses
*Car with data members to store ownership cost, warranty (by years), seating
capacity, and fuel type (diesel or petrol).
*Bike with data members to store the number of cylinders, number of gears, cooling
type (air, liquid, or oil), wheel type (alloys or spokes) and fuel tank size (in inches)
Make another two subclasses, Audi and Ford of Car, each having a data member to
store the model type. Next, make two subclasses, Bajaj and TVS, each having a data
member to store the make-type.
Now, store and print the information of an Audi and a Ford car (i.e., model type,
ownership cost, warranty, seating capacity, fuel type, mileage, and price.) Do the
same for a Bajaj and a TVS bike.*/

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
protected:
    int mileage;
    long long price;

public:
    Vehicle(int m, long long p) : mileage(m), price(p) {}

    void displayVehicleInfo()
    {
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Price: " << price << " Taka" << endl;
    }
};

class Car : public Vehicle
{
protected:
    double ownershipCost;
    int warrantyYears;
    int seatingCapacity;
    string fuelType;

public:
    Car(int m, long long p, double oc, int w, int sc, string ft) : Vehicle(m, p), ownershipCost(oc), warrantyYears(w), seatingCapacity(sc), fuelType(ft) {}

    void displayCarInfo()
    {
        displayVehicleInfo();
        cout << "Ownership Cost: " << ownershipCost << " Taka/year" << endl;
        cout << "Warranty: " << warrantyYears << " years" << endl;
        cout << "Seating Capacity: " << seatingCapacity << " passengers" << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class Bike : public Vehicle
{
protected:
    int cylinders;
    int gears;
    string coolingType;
    string wheelType;
    int fuelTankSize;

public:
    Bike(int m, long long p, int c, int g, string ct, string wt, int fts) : Vehicle(m, p), cylinders(c), gears(g), coolingType(ct), wheelType(wt), fuelTankSize(fts) {}

    void displayBikeInfo()
    {
        displayVehicleInfo();
        cout << "Cylinders: " << cylinders << endl;
        cout << "Gears: " << gears << endl;
        cout << "Cooling Type: " << coolingType << endl;
        cout << "Wheel Type: " << wheelType << endl;
        cout << "Fuel Tank Size: " << fuelTankSize << " inches" << endl;
    }
};

class Audi : public Car
{
private:
    string modelType;

public:
    Audi(int m, long long p, double oc, int w, int sc, string ft, string mt) : Car(m, p, oc, w, sc, ft), modelType(mt) {}

    void displayInfo()
    {
        cout << "Model Type: " << modelType << endl;
        displayCarInfo();
    }
};

class Ford : public Car
{
private:
    string modelType;

public:
    Ford(int m, long long p, double oc, int w, int sc, string ft, string mt) : Car(m, p, oc, w, sc, ft), modelType(mt) {}

    void displayInfo()
    {
        cout << "Model Type: " << modelType << endl;
        displayCarInfo();
    }
};

class Bajaj : public Bike
{
private:
    string makeType;

public:
    Bajaj(int m, long long p, int c, int g, string ct, string wt, int fts, string mt) : Bike(m, p, c, g, ct, wt, fts), makeType(mt) {}

    void displayInfo()
    {
        cout << "Make Type: " << makeType << endl;
        displayBikeInfo();
    }
};

class TVS : public Bike
{
private:
    string makeType;

public:
    TVS(int m, long long p, int c, int g, string ct, string wt, int fts, string mt) : Bike(m, p, c, g, ct, wt, fts), makeType(mt) {}

    void displayInfo()
    {
        cout << "Make Type: " << makeType << endl;
        displayBikeInfo();
    }
};

int main()
{
    Audi audi(20, 50000000, 100000, 5, 5, "Petrol", "A4");
    Ford ford(18, 40000000, 80000, 3, 5, "Diesel", "Fiesta");
    Bajaj bajaj(50, 200000, 1, 4, "Air", "Spokes", 3, "Pulsar");
    TVS tvs(60, 150000, 1, 4, "Liquid", "Alloys", 2, "Apache");

    cout << "Audi Car Information:\n";
    audi.displayInfo();
    cout << endl;

    cout << "Ford Car Information:\n";
    ford.displayInfo();
    cout << endl;

    cout << "Bajaj Bike Information:\n";
    bajaj.displayInfo();
    cout << endl;

    cout << "TVS Bike Information:\n";
    tvs.displayInfo();
    cout << endl;

    return 0;
}
