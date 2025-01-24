/*....03....Create a C++ program that maintains employee records as arrays.
Write a function that accepts an array of employee records and updates their
salaries based on a given percentage increase.*/

#include<iostream>

using namespace std;

void updateSalary(int arr[],int num,double &percentage)
{
    for(int i=0; i<num; i++)
    {
        arr[i] = arr[i] + arr[i]*(percentage/100);
    }
}

int main()
{
    int num,i;
    cout<<"Enter the number of employers = ";

    cin>>num;

    int arr[num];
    cout<<"........Enter the salary of employers.........."<<endl;

    for(i=0; i<num; i++)
    {
        cout<<"Employer"<<"["<<i+1<<"]"<< " = ";
        cin>>arr[i];
    }
    double percentage;
    cout<<"Enter the percentage increase the salary = ";
    cin>>percentage;

    updateSalary(arr,num,percentage);

    cout<<"........After updating the salary of employers.........."<<endl;
    for(i=0; i<num; i++)
    {
        cout<<"Employer"<<"["<<i+1<<"]"<< " = "<<arr[i]<<endl;

    }
    return 0;
}
