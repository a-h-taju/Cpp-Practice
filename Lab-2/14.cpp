/*....14....Suppose you have an Array with the size of 10. Your program will input all
the array elements from the user. Now using a loop, traverse the array. During
traversing if the array contains an odd number in odd index, take the odd value
from that odd index from the array and make the summation of those numbers
and replace that index value with 0. Print the summation and also the array. The
given sample is for your understanding. You must use your own sample. Example is given in question*/

#include <iostream>

using namespace std;

int operationArray(int arr[], int size)
{

    int sum = 0;

    for (int i = 1; i <= size; i++)
    {
        if (i % 2 == 1 && arr[i] % 2 == 1)
        {
            sum = sum + arr[i];
            arr[i] = 0;
        }
    }

    return sum;
}

int main()
{
    const int size = 10;
    int arr[size];

    cout << "Enter 10 elements: ";
    for (int i = 1; i <= size; i++)
    {

        cin >> arr[i];
    }

    int sum = operationArray(arr, size);

    cout << "After Operation Elements: ";
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Summation = " << sum << endl;

    return 0;
}
