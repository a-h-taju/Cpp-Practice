/*....08....Create a program using arrays to manipulate vectors of integers.
Implement a function that takes an array of integers and squares each
element in the array.*/

#include <iostream>

using namespace std;

void squareArrayElements(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
}

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    squareArrayElements(arr, size);

    cout << "The squared elements of the array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}
