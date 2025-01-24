#include<iostream>
using namespace std;

void applyDiscount(int item_price,float percentage_discount)
{
    int price =  item_price - (item_price * percentage_discount/100.00);

    cout<<"Single item price after "<<percentage_discount<<"% discount = "<<price<<endl;
}
void applyDiscount(int item_price,double flat_discount)
{
    int price =  item_price - (item_price * flat_discount/100.00);

    cout<<"Single item price after flat discount of "<<flat_discount<<" = "<<price<<endl;
}
void applyDiscount(int arr[],int num_of_items,float percentage_discount)
{
    int total_price = 0,price;
    for(int i=0; i<num_of_items; i++)
    {
        total_price = total_price + arr[i];
    }
    price = total_price - (total_price * percentage_discount / 100.00);
    cout<<"Multiple items total price after "<<percentage_discount<<"% discount = "<<price<<endl;
}
int main()
{
    int item_price,num_of_items,i;
    float percentage_discount;
    double flat_discount;

    cout<<"Enter the item price = ";
    cin>>item_price;
    cout<<"Enter the percentage discount = ";
    cin>>percentage_discount;
    cout<<"Enter the flat discount = ";
    cin>>flat_discount;
    cout<<"Enter the num of items = ";
    cin>>num_of_items;

    int arr[num_of_items];

    cout<<"****Enter the num of items price****"<<endl;
    for(i=0; i<num_of_items; i++)
    {
        cout<<1+i<<". ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Orginal Item price = "<<item_price<<endl;
    applyDiscount(item_price,percentage_discount);
    applyDiscount(item_price,flat_discount);
    applyDiscount(arr,num_of_items,percentage_discount);


    return 0;
}
