#include<iostream>
#include<string>

using namespace std;

void sort(int arr[],int size)
{
    for (int i=0; i<size-1; i++)
    {
        for (int j=0; j<size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void sort(float arr[],int size)
{
    for (int i=0; i<size-1; i++)
    {
        for (int j=0; j<size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
        {
            float temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void sort(string arr[],int size)
{
    for (int i=0; i<size-1; i++)
    {
        for (int j=0; j<size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                string temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray(int arr[],int size)
{
    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printArray(float arr[],int size)
{
    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printArray(string arr[],int size)
{
    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int intArray[] = {42, 7, 19, 3, 25};
    int intSize = sizeof(intArray)/ sizeof(intArray[0]);

    cout<<"Original integer array: ";
    printArray(intArray, intSize);
    sort(intArray, intSize);
    cout<<"Sorted integer array: ";
    printArray(intArray, intSize);

    cout<<endl;

    float floatArray[] = {3.14, 1.59, 2.71, 0.67, 4.23};
    int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);

    cout<<"Original fl cout<<endl;oat array: ";
    printArray(floatArray, floatSize);
    sort(floatArray, floatSize);
    cout<<"Sorted float array: ";
    printArray(floatArray, floatSize);

    cout<<endl;

    string stringArray[] = {"banana", "apple", "cherry", "date", "fig"};
    int stringSize = sizeof(stringArray) / sizeof(stringArray[0]);

    cout<<"Original string array: ";
    printArray(stringArray, stringSize);
    sort(stringArray, stringSize);
    cout<<"Sorted string array: ";
    printArray(stringArray, stringSize);

    return 0;
}
