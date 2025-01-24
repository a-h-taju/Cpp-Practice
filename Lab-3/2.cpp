/*....02....Rahul loves to play with numbers; he challenges his friend Ankush with a number- related problem in which he has to reverse the order of two digits and then swap them. Let us take the two digits as a and
b.Complete the functions reverse_dig() and swap() with arguments as a and b references. Don’t return anything to the function.*/

#include <iostream>

using namespace std;

inline void reverseDigit(int &a, int &b);
inline void swap(int &a, int &b);

int main()
{
    int a, b;

    cout << "Enter two digit numbers: ";
    cin >> a >> b;

    cout<<endl;

    reverseDigit(a, b);
    swap(a, b);
    cout << "After reversing and swapping, a = " << a << " and b = " << b
         << endl;

    return 0;
}

inline void reverseDigit(int &a, int &b)
{
    int revOfA=0,rem,temp;
    temp = a;

    while(temp!=0)
    {
        rem = temp % 10;
        revOfA = revOfA * 10 + rem;
        temp = temp / 10;

    }

    a = revOfA;

    int revOfB=0;
    temp = b;

    while(temp!=0)
    {
        rem = temp % 10;
        revOfB = revOfB * 10 + rem;
        temp = temp / 10;
    }
    b = revOfB;
}
inline void swap(int &a, int &b)
{
    int temp = a;
    a = b;

    b = temp;
}
