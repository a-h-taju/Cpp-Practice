#include<iostream>
#include<string>
using namespace std;

string formatDate(int day, int month, int year)
{
    string d = to_string(day);
    string m = to_string(month);
    string y = to_string(year);
    string s = d + "/" + m + "/" + y;
    return s;
}
string formatDate(string date)
{
    string y, m, d;
    y = date.substr(0,4);
    m = date.substr(5,2);
    d = date.substr(8,2);
    string s = d + "/" + m + "/" + y;
    return s;
}
int main()
{
    cout<<"Formatted date (int input): "<<formatDate(24, 12, 2024)<<endl;
    cout<<"Formatted date (string input): "<<formatDate("2024-12-24")<<endl;
    return 0;
}

