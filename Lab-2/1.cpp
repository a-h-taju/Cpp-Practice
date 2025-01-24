/*....01....Given an integer number write a program in C++ using while loop to reverse
the digit of the number. For example: the number 12345 should be written as
54321*/

#include <iostream>

using namespace std;

int reverseDigits(int num)
{
    int temp,rem,sum = 0;
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10 ;
        sum = sum * 10 + rem ;
        temp = temp / 10;
    }
    return sum;
}


int main()
{
    int num;
    cout << "Enter any number= ";
    cin>>num;

    int revNum = reverseDigits(num);

    cout << "Reverse of number is " << revNum ;

    return 0;
}


