#include<iostream>
using namespace std;
class Signal
{
    int state;
public:
    Signal(int s)
    {
        if(s == 1 || s == 0)
        {
            state = s;
        }
        else
            cout<<"Invalid signal";
    }
    Signal operator ! ()
    {
        return Signal(1 - state);
    }
    void display()
    {
        cout<<state<<endl;
    }
};
int main()
{
    Signal s1(1);
    Signal s2(0);
    cout<<"The Initial states of digital signals s1 = ";
    s1.display();
    cout<<"The Initial states of digital signals s2 = ";
    s2.display();
    Signal not_s1 = !s1;
    Signal not_s2 = !s2;
    cout<<endl;
    cout<<"The states of digital signals !s1 = ";
    not_s1.display();
    cout<<"The states of digital signals !s1 = ";
    not_s2.display();
    return 0;
}
