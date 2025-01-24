/*....09....Write a program in C++ that compute the sum of the digit of a given integer
number. Input: 5654 Output: 20*/

#include <iostream>

using namespace std;

int sumOfDigits(int num)
{
    int temp,rem,sum = 0;
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10 ;
        sum = sum + rem ;
        temp = temp / 10;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter any number= ";
    cin>>num;

    int sumNum = sumOfDigits(num);

    cout << "Reverse of number is " << sumNum ;

    return 0;
}
