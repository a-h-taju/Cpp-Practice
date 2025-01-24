/*....04....Define a class GymMember with attributes memberID, name, and
membershipFee. Use a parameterized constructor to register a new
member. Add member functions to calculate and display discounted
membership fees for different membership types.*/

#include<iostream>
#include<string>

using namespace std;

class gym_member
{
public:
    string id,name;
    int fee;

    gym_member(string i,string n,int f)
    {
        id = i;
        name = n;
        fee = f;
    }

    void general_member_discount()
    {
        double discount = fee * (20.0/100);
        double discount_fee = fee - discount;
        cout<<"General Member Discount = "<<discount<<endl;
        cout<<"General Member Discount Fee = "<<discount_fee<<endl;
    }
    void premium_member_discount()
    {
        double discount = fee * (50.0/100);
        double discount_fee = fee - discount;
        cout<<"Premium Member Discount = "<<discount<<endl;
        cout<<"Premium Member Discount Fee = "<<discount_fee<<endl;
    }
};
int main()
{
    string member_id,member_name;
    int member_fee;
    char member_type;

    cout<<"Enter the Gym member ID = ";

    getline(cin, member_id);
    cout<<"Enter the Gym member Name = ";
    getline(cin, member_name);
    cout<<"Enter the Gym membership fee = ";
    cin>>member_fee;

    gym_member member(member_id,member_name,member_fee);

    cout<<endl;

    cout<<"Gym member ID = "<<member.id<<endl;
    cout<<"Gym member Name = "<<member.name<<endl;
    cout<<"Gym member Fee = "<<member.fee<<endl;

    cout<<"\n Enter the Gym member type(g for general & p for premium) = ";
    cin>>member_type;
    member_type = tolower(member_type);
    if(member_type == 'g' )
    {
        member.general_member_discount();
    }
    else if(member_type == 'p')

    {
        member.premium_member_discount();
    }
    else
        cout<<"Invalid membership type"<<endl;

    return 0;
}
