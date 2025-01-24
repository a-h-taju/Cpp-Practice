/*....07....Write a program to print a floyed triangle as shown bellow-
*
* *
* * *
* * * *
*/

#include <iostream>

using namespace std;

void printTriangle(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        cout << endl;
    }
}
int main()
{
    int size = 4;
    printTriangle(size);
    return 0;

}
