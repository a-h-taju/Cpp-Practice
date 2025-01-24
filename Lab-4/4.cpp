/*....04....You are developing a restaurant ordering system and need to
create a class called "MenuItem" in C++. The MenuItem class should
have attributes for item name, price, and description.Implement a
member function to:
1. Display the details of the menu item.
Create an instance of the MenuItem class with name="Cheeseburger",
price=10.99, and description="Juicy beef patty with melted cheese."
Call the display function to print the menu item details.*/

#include<iostream>

using namespace std;

class MenuItem
{
public:
    string itemName,description;
    float price;
    void detailsMenuItem()
    {
        cout<<"Menu Item Name="<<itemName<<endl;
        cout<<"Menu Item Price="<<price<<"$"<<endl;
        cout<<"Menu Item Description="<<description<<endl;

    }
};
int main()
{
    MenuItem Cheeseburger;
    cout<<"Enter the Menu Item Name=";
    getline(cin,Cheeseburger.itemName);
    cout<<"Enter the Menu Item Description=";
    getline(cin, Cheeseburger.description);
    cout<<"Enter the Menu Item Price=";
    cin>>Cheeseburger.price;
    Cheeseburger.detailsMenuItem();
    return 0;
}
