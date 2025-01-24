/*....08....You are building an online shopping system and need to create a
class called "Product" in C++.The Product class should have attributes
for product ID, name, price, and quantity. Implement member
functions to:
1. Update the quantity of the product.
2. Display the PP.
Create an instance of the Product class with ID="P001",
name="Smartphone", price=499.99, and quantity=10. Update the
quantity to 5 and display the product details.*/

#include<iostream>

using namespace std;

class Product
{
public:
    string id, name;
    int quantity;
    float price;
    void updateQuantity(int x)
    {
        quantity = x;
    }
    void productDetails()
    {
        cout<<"Product ID = "<<id<<endl;
        cout<<"Product Name = "<<name<<endl;
        cout<<"Product Price = "<<price<<endl;

        cout<<"Product Update Quantity = "<<quantity<<endl;
    }
};
int main()
{
    Product product;
    cout<<"Enter the Product ID = ";
    cin>>product.id;
    cout<<"Enter the Product Name = ";
    cin>>product.name;
    cout<<"Enter the Product Price = ";
    cin>>product.price;
    cout<<"Enter the Product Quantity = ";
    cin>>product.quantity;
    int n;
    cout<<"Enter the Product Update Quantity = ";
    cin>>n;
    product.updateQuantity(n);
    product.productDetails();
    return 0;
}
