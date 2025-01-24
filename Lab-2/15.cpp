/*....15....The scenario in front of any virtual Bank is like, Men and women are
standing in a single line. It looks so bad. Now separate men and women in
different two line that it looks like a gentle management system and also
develop the above program to find the majority of gender in the line. Example is given in the question*/

#include<iostream>

using namespace std;

void sort(int n)
{
    int men=0,women=0;
    char s;
    while(n--)
    {

        cin>>s;
        if(s=='m' || s=='M')men++;
        if(s=='w' || s=='W')women++;
    }
    cout<<endl;
    if(men>=women)
    {
        while(men--)
        {
            cout<<"M"<<' ';
        }
        cout<<endl;
        while(women--)
        {
            cout<<"W"<<' ';
        }
        cout<<endl;
    }
    else
    {
        while(women--)
        {

            cout<<"W"<<' ';
        }
        cout<<endl;
        while(men--)
        {
            cout<<"M"<<' ';
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of Men and Women = ";
    cin>>n;
    cout<<"\nEnter the line of Men and Women = ";
    sort(n);
    return 0;
}
