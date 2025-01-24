/*....03....Write the program to print the following outputs using for loops.
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

#include<iostream>

using namespace std;

void printPattern(int num)
{
    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout<<endl;
    }
}
int main()
{
    int num,row,col;

    cout<<"Enter the number=";

    cin>>num;
    printPattern(num);

    return 0;
}
