/*....13....Write a program to add, Subtract and multiply two matrix Using 2D Array.*/

#include <iostream>

using namespace std;

void addMatrices(int A[][100], int B[][100], int result[][100], int rows, int
                 cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[][100], int B[][100], int result[][100], int rows,
                      int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrices(int A[][100], int B[][100], int result[][100], int rowsA,
                      int colsA, int colsB)
{
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++)

            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][100], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rowsA, colsA, rowsB, colsB;

    cout << "Enter the number of rows and columns of matrix A: ";
    cin >> rowsA >> colsA;

    cout << "Enter the number of rows and columns of matrix B: ";
    cin >> rowsB >> colsB;

    if (colsA != rowsB)
    {
        cout << "Matrix multiplication is not possible. The number of columns of matrix A must be equal to the number of rows of matrix B." << endl;
        return 0;
    }

    int A[100][100], B[100][100], result[100][100];

    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            cin >> A[i][j];

        }
    }

    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            cin >> B[i][j];
        }
    }

    cout << "Addition of matrices:" << endl;
    addMatrices(A, B, result, rowsA, colsA);
    printMatrix(result, rowsA, colsA);

    cout << "Subtraction of matrices:" << endl;
    subtractMatrices(A, B, result, rowsA, colsA);
    printMatrix(result, rowsA, colsA);

    cout << "Multiplication of matrices:" << endl;
    multiplyMatrices(A, B, result, rowsA, colsA, colsB);

    printMatrix(result, rowsA, colsB);

    return 0;
}
