/*....07....Implement the FizzBuzz game using loops and if-else statements.
Print numbers from 1 to 100, replacing multiples of 3 with "Fizz,"
multiples of 5 with "Buzz," and multiples of both 3 and 5 with
"FizzBuzz."*/

#include <iostream>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "FizzBuzz" << std::endl;
        }
        else if (i % 3 == 0)
        {
            std::cout << "Fizz" << std::endl;
        }
        else if (i % 5 == 0)
        {

            std::cout << "Buzz" << std::endl;
        }
        else
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
