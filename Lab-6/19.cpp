/*....19....Design a class Item with attributes itemCode, name, and quantity.
 Use constructor overloading to initialize an item with either just the name or all
attributes.
Add member functions to update stock and display inventory details.*/

#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
    int itemCode;
    string name;
    int quantity;

public:
    Item(string itemName)
    {
        itemCode = 0;
        name = itemName;
        quantity = 0;
    }
    Item(int code, string itemName, int qty)
    {
        itemCode = code;
        name = itemName;
        quantity = qty;
    }
    void updateStock(int qty)
    {
        quantity += qty;
        cout << "Stock updated. New quantity: " << quantity << endl;
    }
    void displayDetails() const
    {
        cout << "Item Code: " << itemCode << endl;
        cout << "Name: " << name << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main()
{
    Item item1("Notebook");
    item1.displayDetails();

    Item item2(101, "Pen", 50);
    item2.displayDetails();

    item2.updateStock(20);

    item2.displayDetails();

    return 0;
}

