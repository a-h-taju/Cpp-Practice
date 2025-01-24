/*....01....You work for a car rental company and need to create a C++ class
called "Car" to manage their fleet. The Car class should have
attributes for make, model, year, and mileage. Implement member
functions to:
1. Get the car's information as a formatted string.
2. Update the car's mileage.
3. Check if the car is a luxury car.
Create an instance of the Car class with make="Toyota",
model="Camry", year=2021, and mileage=10000. Call the information
function and print the result. Then, update the mileage by 500 and
call the information function again. Finally, check if the car is a luxury
car and print the result.Your implementation should demonstrate the
use of classes, member functions, and object instantiation in C++.*/

#include<iostream>

using namespace std;

class car
{
private:
    string make,model;
    int mileage;
    int year;

public:
    void getdata()
    {
        cout<<"Enter the company name : ";
        cin>>make;
        cout<<"Enter the car model name : ";
        cin>>model;
        cout<<"Enter the car mileage : ";
        cin>>mileage;
        cout<<"Enter the year : ";
        cin>>year;
    }
    void putdata()
    {
        cout<<"The car company name : "<<make<<endl;
        cout<<"The car model name : "<<model<<endl;
        cout<<"The car year : "<<year<<endl;
    }
    void update(int x)
    {

        mileage-=x;
        cout<<"The car mileage : "<<mileage<<endl;
    }
    void check()
    {
        if(mileage>=5000)
            cout<<"The car is Luxury";
        else
            cout<<"Not Luxury";
    }
};
int main()
{
    car mycar;
    mycar.getdata();
    mycar.putdata();
    mycar.update(500);
    mycar.check();
    return 0;
}
