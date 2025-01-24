/*....04....Write a program in C++ to read the age of 10 persons and count the number
of persons in the age group 50 to 60.*/

#include <iostream>

using namespace std;

int countAge(int ages[], int numberOfPersons)
{
    int count = 0;
    for (int i = 0; i < numberOfPersons; i++)
    {
        if (ages[i] >= 50 && ages[i] <= 60)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int numberOfPersons = 10;
    int ages[numberOfPersons];

    cout << "Enter the age of 10 persons:" << endl;
    for (int i = 0; i < numberOfPersons; i++)
    {

        cout << "Person " << i + 1 << ": ";
        cin >> ages[i];
    }

    int count = countAge(ages, numberOfPersons);

    cout << "Number of persons in the age group 50 to 60: " << count <<
         endl;

    return 0;
}
