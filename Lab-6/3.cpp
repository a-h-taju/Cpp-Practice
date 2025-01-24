/*....03....Implement a class Product with attributes productID, name, and
price. Use a parameterized constructor to initialize a product. Add
member functions to calculate the total price for a given quantity and
display product details.*/

#include<iostream>
#include<string>

using namespace std;

class Product
{
    string product_id,name;
    float price,amount;
public:
    Product(string i,string n,int p)
    {
        product_id = i;
        name = n;
        price = p;
    }
    void calculate_price(float quantity)
    {
        amount = price * quantity;

    }
    void display()
    {
        cout<<" Product ID number = "<<product_id<<endl;
        cout<<" Product Name = "<<name<<endl;
        cout<<" Product Price = "<<price<<endl;
        cout<<" Product Total Price = "<<amount<<endl;
    }
};
int main()
{
    Product product("A101","Macbook Air pro",112000);
    product.calculate_price(5);
    product.display();
    return 0;
}
