#include<iostream>
#include<string>
using namespace std;
class Item
{
    string name;
    int stock;
public:
    Item(string n,int s)
    {
        name = n;
        stock = s;
    }
    void operator -- ()
    {
        if(stock>1)
        {
            --stock;
            cout<<name<<" one item sold.remaining item = "<<stock<<endl;
        }

        else if(stock==1)
        {
            cout<<name<<"Stock Out"<<endl;
        }
    }
    void display()
    {
        cout<<"Item Name :"<<name<<endl;
        cout<<"Stock Quantity :"<<stock<<endl;
    }
};
int main()
{
    string name;
    int stock;

    cout<<"Enter Item name = ";
    cin>>name;
    cout<<"Enter Stock Quantity = ";
    cin>>stock;
    cout<<endl;
    Item I(name,stock);
    I.display();
    cout<<endl;
    for(int i=1; i<=stock; i++)
    {
        cout<<i<<". ";
        --I;
    }

    return 0;
}
