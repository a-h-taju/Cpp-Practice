/*....06....Create a program using arrays to calculate students’ final grades.
Implement a function that takes an array of test scores and calculates
the average score.*/

#include<iostream>

using namespace std;

void calculateAverage(int arr[], int n, double &avg);
char calculatingGrade(double avg);

int main()
{
    int n, i;
    cout << "Enter the number of students = ";
    cin >> n;

    int arr[n];

    cout << endl;

    cout << "Enter the test scores for each student:" << endl;
    for(i = 0; i < n; i++)
    {
        cout << "Test-" << i + 1 << " = ";
        cin >> arr[i];
    }

    cout << endl;

    double avg;

    calculateAverage(arr, n, avg);

    cout << "The average score = " << avg << endl;

    char grade = calculatingGrade(avg);

    cout << "The Final Grade is " << grade << endl;

    return 0;
}

void calculateAverage(int arr[], int n, double &avg)
{
    int sum = 0, i;
    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    avg = double(sum) / n;
}

char calculatingGrade(double avg)
{
    if (avg >= 90)
        return 'A';
    else if (avg >= 80)
        return 'B';
    else if (avg >= 70)

        return 'C';
    else if (avg >= 60)
        return 'D';
    else
        return 'F';
}
