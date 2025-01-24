/*....16....There’s a list of number in a row on the table. Your teacher is telling a
number which is the addition of any of the two number from the given number
list on the table. Your job is to find that two number which addition is equal to
the number given by your teacher. If there’s no pair of number in a list is equal
to the given number by your teacher, then you will say “Sir, there’s no pair of
numbers equal to your number” otherwise you will show that two number
which addition is equal to the given number by your teacher. Write a program
to solve the situation.*/

#include<iostream>

using namespace std;

void find(int arr[],int n)
{
    int temp,i,j;

    cout<<"\nEnter number you want to check = ";
    cin>>temp;
    for(i=0; i<n; i++)
    {

        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==temp)
            {
                cout<<"\n"<<arr[i]<<' '<<arr[j]<<endl;
                return;
            }
        }
    }
    cout<<"\n Sir, there is no pair of numbers equal to your number"<<endl;
}
int main()
{
    int n,t;

    cout<<"Enter the number of elements = ";
    cin>>n;

    int arr[n];

    cout<<"\nEnter the elements of the array = ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the number of test cases = ";
    cin>>t;
    while(t--)
    {
        find(arr,n);
    }
    return 0;
}
