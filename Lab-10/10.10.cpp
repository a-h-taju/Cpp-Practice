#include<iostream>
using namespace std;

class MyString
{
    string name;
public:
    MyString(string a)
    {
        name = a;
    }
    MyString operator + (MyString &str2)
    {
        return MyString(name + str2.name);
    }
    void display()
    {
        cout<<name<<endl;
    }
};
int main()
{
    MyString c1("Taju");
    MyString c2(" Mia");

    cout<<"First name = ";
    c1.display();
    cout<<"Second name = ";
    c2.display();
    cout<<endl;
    MyString add = c1 + c2;
    cout<<"Full name = ";
    add.display();

    return 0;
}

