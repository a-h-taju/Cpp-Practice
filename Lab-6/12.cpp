/*....12....Design a class Connection with attributes connectionID and status. Establish a connection
in the constructor and terminate it in the destructor. Add member functions to send data
and check connection status.*/

#include<iostream>
using namespace std;
class Connection
{
public:
    int id;
    bool status;
    Connection(int i)
    {
        status = true;
        id = i;
    }
    ~Connection()
    {
        status = false;
    }
    bool check()
    {
        if(status)
            return true;
        else return false;
    }
    void sendData()
    {
        if(check())
        {
            cout<<"Connected! Sending data from connection id: "<<id<<"....."<<endl;
        }
        else
        {
            cout<<"Not Connected!"<<endl;
        }
    }
};
int main()
{
    Connection con1(1), con2(2), con3(3);
    con1.sendData();
    con2.sendData();
    con3.sendData();
    return 0;
}
