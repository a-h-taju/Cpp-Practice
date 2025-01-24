/*....08....You have a store that sells various products, and you want to
display the details of all the products available. Create a class called
"Product" with attributes for product name, price, and quantity.
Implement member functions to update the product quantity and
display the product details. Create an array of 12 Product objects and
print the details of all products along with their quantities.*/

#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
    string name;
    double price;
    int quantity;
public:
    Product(string productName, double productPrice)
    {
        name = productName;
        price = productPrice;
        quantity = 0;
    }
    void updateQuantity(int newQuantity)
    {
        quantity = newQuantity;
    }
    string getName() const
    {
        return name;
    }

    double getPrice() const
    {
        return price;
    }
    int getQuantity() const
    {
        return quantity;
    }
    void displayDetails() const
    {
        cout << "Product: " << name << ", Price: $" << price << ", Quantity:" << quantity << endl;
    }
};
int main()
{
    Product products[12] =
    {
        Product("Laptop", 899.99),
        Product("Smartphone", 499.99),
        Product("Tablet", 299.99),
        Product("Headphones", 99.99),
        Product("Smartwatch", 199.99),
        Product("TV", 649.99),
        Product("Camera", 399.99),
        Product("Speakers", 79.99),
        Product("Keyboard", 29.99),
        Product("Mouse", 19.99),
        Product("Monitor", 249.99),
        Product("Printer", 139.99)
    };
    for (int i = 0; i < 12; ++i)
    {

        int quantity;
        cout << "Enter quantity for " << products[i].getName() << ": ";
        cin >> quantity;
        products[i].updateQuantity(quantity);
    }
    cout << "\nProduct Details in the Store:\n";
    for (int i = 0; i < 12; ++i)
    {
        products[i].displayDetails();
    }
    return 0;
}
