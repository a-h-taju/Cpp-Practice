#include <iostream>
using namespace std;

class Cart
{
    double price;
    int quantity;
public:
    Cart(double p,int q)
    {
        price = p;
        quantity = q;
    }
    double total_price()
    {
        return price * quantity;
    }

    double operator + (Cart &other)
    {
        return total_price() + other.total_price();
    }
};

int main()
{
    Cart cart1(10.99,3);
    Cart cart2(5.49,2);

    cout<<"Total price of Cart 1: " << cart1.total_price()<<endl;
    cout<<"Total price of Cart 2: " << cart2.total_price()<<endl;

    double total = cart1 + cart2;
    cout<<"Total price of both carts combined: "<<total<<endl;

    return 0;
}



