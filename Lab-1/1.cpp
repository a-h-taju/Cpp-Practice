/*....01....Given a student's score, can you determine and return their
corresponding letter grade (A, B, C, D, or F) using if-else statements?*/

#include <iostream>
using namespace std ;
int main()
{
    int score;

    cout << "Enter the student's score (0-100): ";
    cin >> score;

    if (score >= 90 && score <= 100)
    {
        cout<<"Your Grade is A";
    }
    else if (score >= 80)
    {
        cout<<"Your Grade is B";
    }
    else if (score >= 70)
    {
        cout<<"Your Grade is C";
    }

    else if (score >= 60)
    {
        cout<<"Your Grade is D";
    }
    else if (score >= 0)
    {
        cout<<"Your Grade is F";
    }
    else
    {
        cout<<"Enter Valid Marks" ; // Invalid score
    }
    return 0;
}
