/*....12....Write a program in C++ to print a 3x3 matrix using array.*/

#include <iostream>
using namespace std;

void printMatrix(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix[3][3];

    cout << "Enter elements of the 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout <<" matrix"<<"["<< i << "]"<<"["<< j << "]"<<"=" ;
            cin >> matrix[i][j];
        }
    }

    cout << "The 3x3 matrix is:\n";
    printMatrix(matrix);

    return 0;
}
