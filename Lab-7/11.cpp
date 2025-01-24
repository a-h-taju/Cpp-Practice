/*....11....Make a Fruit class with a data member to calculate the number of fruits in a basket.
Create two other classes named Apples and Mangoes to calculate the number of
apples and mangoes in the basket. Print the number of fruits of each type and the total
number of fruits in the basket.*/

#include <iostream>

using namespace std;

class Fruit
{
public:
    int num_of_fruits;

    Fruit(int num)
    {
        num_of_fruits = num;
    }
};

class Apples : public Fruit
{
public:
    Apples(int num_of_apples) : Fruit(num_of_apples)
    {

    }
};

class Mangoes : public Fruit
{
public:
    Mangoes(int num_of_mangoes) : Fruit(num_of_mangoes)
    {

    }
};

int main()
{
    int num_of_apples, num_of_mangoes;

    cout << "Enter the number of apples: ";
    cin >> num_of_apples;

    cout << "Enter the number of mangoes: ";
    cin >> num_of_mangoes;

    Apples obj1(num_of_apples);
    Mangoes obj2(num_of_mangoes);

    int totalFruits = obj1.num_of_fruits + obj2.num_of_fruits;

    cout << "Number of apples: " << obj1.num_of_fruits << endl;
    cout << "Number of mangoes: " << obj2.num_of_fruits << endl;
    cout << "Total number of fruits: " << totalFruits << endl;

    return 0;
}
