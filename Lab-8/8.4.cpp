#include<iostream>
#include<string>
using namespace std;

int processString(string str)
{
    return str.length();
}
int processString(string str,char target)
{
    int count = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == target)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string str;
    char ch;
    int length,count_char;

    cout<<"Enter the string = ";
    getline(cin,str);

    cout<<"Enter the target character = ";
    cin>>ch;

    length = processString(str);
    cout<<"Length of String = "<<length<<endl;

    count_char = processString(str,ch);
    cout<<"target character count of string = "<<count_char<<endl;

    return 0;
}

