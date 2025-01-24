/*....16....Create a class “Number” with protected member ‘num’, ’ sqr’, ‘cube’ constructor that
takes the input of num. Create another class, “Square,” which inherits “Number.” and
has a constructor which finds the square of ‘num’ and assigns it to ‘sqr’ and a public
member function ‘display’ which prints the value; of ‘sqr.’ Create another class,
“Cube,” which inherits “Number.” and has a constructor which finds the cube of
‘num’ and assigns it to ‘cube’ and a public member function ‘print’ which prints the
value. Of ‘cube.’*/

#include <iostream>

using namespace std;

class Number
{
protected:
    int num, sqr, cube;

public:
    Number(int n)
    {
        num = n;
    }
};

class Square : public Number
{
public:
    Square(int n) : Number(n)
    {
        sqr = num * num;
    }

    void display()
    {
        cout << "Square of " << num << " is: " << sqr << endl;
    }
};

class Cube : public Number
{
public:
    Cube(int n) : Number(n)
    {
        cube = num * num * num;
    }

    void print()
    {
        cout << "Cube of " << num << " is: " << cube << endl;
    }
};

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Square s(n);
    Cube c(n);

    s.display();
    c.print();

    return 0;
}
