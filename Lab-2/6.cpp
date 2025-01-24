/*....06....Write a program to print a square size 5 by using the character S as shown
below-Table is given in the question*/

#include <iostream>

using namespace std;

void printSquare(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            if(i==2 && j==2)
            {
                cout << "O ";
            }
            else
            {
                cout << "S ";
            }
        }
        cout << endl;
    }

}
int main()
{
    int size = 5;
    printSquare(size);
    return 0;
}
