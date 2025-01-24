/*....11....Write a program in C++ to sort an array in ascending order and find the 3rd
largest element in array in the array.*/

#include<iostream>

using namespace std;

void sort(int arr[],int n)
{
    int temp,i,j;
    for(i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements = ";
    cin>>n;

    int arr[n];

    cout<<"\nEnter the elements of the array = ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    cout<<"\nThe 3rd largest element is "<<arr[n-3]<<endl;
    return 0;
}
