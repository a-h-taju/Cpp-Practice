#include <iostream>
#include <ctime>
using namespace std;
class Date
{
private:
    int day, month, year;
    bool isLeapYear(int year)
    {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
    int daysInMonth(int month, int year)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0;
        }
    }

public:
    Date(int a, int b, int c)
    {
        day = a;
        month = b;
        year = c;
    }
    Date operator+()
    {
        day++;

        if (day > daysInMonth(month, year))
        {
            day = 1;
            month++;

            if (month > 12)
            {
                month = 1;
                year++;
            }
        }
        return *this;
    }
    void display()
    {
        if (day < 10)
        {
            cout << "0" << day << "/";
        }
        else
        {
            cout << day << "/";
        }

        if (month < 10)
        {
            cout << "0" << month << "/";
        }
        else
        {
            cout << month << "/";
        }

        cout << year;
    }
};

int main()
{
    Date date(31, 12, 2024);

    cout << "Original Date: ";
    date.display();

    // Correctly assign the incremented date
    date = +date;

    cout << "\nDate after increment: ";
    date.display();

    return 0;
}
