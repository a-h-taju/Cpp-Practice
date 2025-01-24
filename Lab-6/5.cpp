/*....05....Create a class ElectricityBill with attributes consumerNumber,
unitsConsumed, and ratePerUnit. Use a constructor with default
arguments to initialize the rate per unit to a standard value. Add
member functions to calculate and display the total bill amount.*/

#include<iostream>
#include<string>

using namespace std;
class electricity
{
    int consumerNumber, unitsConsumed,ratePerUnit,bill;
public:
    electricity(int a,int b,int c=10)
    {
        consumerNumber = a;
        unitsConsumed = b;
        ratePerUnit = c;
    }
    void calculate_bill()
    {
        bill = ratePerUnit * unitsConsumed;

        cout<<"Total Bill Amount = "<<bill;
    }
};
int main()
{
    int n,u;
    cout<<"Enter the consume number = ";
    cin>>n;
    cout<<"Enter the Unit consumed = ";
    cin>>u;
    electricity bill(n,u);
    bill.calculate_bill();
    return 0;
}
