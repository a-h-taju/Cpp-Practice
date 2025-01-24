/*....14....Let’s create a bank account. Create a class named 'BankAccount'
with the following data members:
1 - Name of depositor
2 - Address of depositor
3 - Type of account
4 - Balance in the account
5 - Number of transactions
The Class 'BankAccount' has a function for each of the following
1 - Generate a unique account number for each depositor For the first
depositor, the account number will be BA1000; for the second
depositor,It will be BA1001, and so on
2 - Display information and balance of depositor
3 - Deposit more amount in the balance of any depositor
4 - Withdraw some amount from the balance deposited
5 - Change the address of the depositor
After creating the class, do the following operations:
1 - Enter the information (name, address, type of account, balance) of
the depositors’ To be entered by the user.
2 - Print the information of any depositor.
3 - Add some amount to the account of any depositor and then
display the final information of that depositor
4 - Remove some amount from the account of any depositor and then
display the final information of that depositor
5 - Change the address of any depositor and then display the final
information of that depositor
6 - Randomly repeat these processes for some other bank accounts
and after that, print The total number of transactions.*/

#include<iostream>
#include<string>

using namespace std;
class BankAccount
{
    string Name;
    string Address;
    string Type;
    double Balance;
    static int Number_of_transactions;
    string AccNo;
public:
    void Get(int n);
    void Generate(int x);
    void Display();
    void Deposit();
    void Withdraw();
    void ChangeAddress();
    void DispNumOfTran();
    friend void Search(BankAccount obj[], int num);
};
void Search(BankAccount obj[], int num)
{
    string str;
    cout<<"Enter the Account No to Deposit: ";
    cin>>str;
    for(int i=0; i<num; i++)
    {
        if(obj[i].AccNo == str)
        {
            obj[i].Deposit();
        }
    }
    cout<<"Enter the Account No to Withdraw: ";

    cin>>str;
    for(int i=0; i<num; i++)
    {
        if(obj[i].AccNo == str)
        {
            obj[i].Withdraw();
        }
    }
    cout<<"Enter the Account No to Change Address: ";
    cin>>str;
    for(int i=0; i<num; i++)
    {
        if(obj[i].AccNo == str)
        {
            obj[i].ChangeAddress();
        }
    }
    cout<<"Enter the Account No to Withdraw: ";
    cin>>str;
    for(int i=0; i<num; i++)
    {
        if(obj[i].AccNo == str)
        {
            obj[i].Withdraw();
        }
    }
}
int main()
{
    int num;
    string str;
    cout<<"Enter the Number of Account Holder: ";
    cin>>num;

    BankAccount obj[num];
    for(int i=0; i<num; i++)
    {
        obj[i].Get(i);
    }
    obj[0].Display();
    Search(obj, num);
    obj[0].DispNumOfTran();
    return 0;
}
int BankAccount :: Number_of_transactions=0;
inline void BankAccount :: Generate(int x)
{
    x+=1000;
    string s = to_string(x);
    AccNo = "BA"+s;
}
inline void BankAccount :: Display()
{
    cout<<"================================\n";
    cout<<"Account No: "<<AccNo<<endl;
    cout<<"Name: "<<Name<<endl;
    cout<<"Address: "<<Address<<endl;
    cout<<"Account Type: "<<Type<<endl;
    cout<<"Balance: "<<Balance<<endl;
}
void BankAccount :: Deposit()
{
    double Amount;
    cout<<"Enter the amount to deposit: ";
    cin>>Amount;
    Balance+=Amount;

    Display();
    Number_of_transactions++;
}
void BankAccount :: Withdraw()
{
    double Amount;
    cout<<"Enter the amount to withdraw: ";
    cin>>Amount;
    Balance-=Amount;
    Display();
    Number_of_transactions++;
}
inline void BankAccount ::ChangeAddress()
{
    cout<<"Enter the new address: ";
    cin>>Address;
    Display();
}
inline void BankAccount :: Get(int n)
{
    Generate(n);
    cout<<"Account No: "<<AccNo<<endl;
    cout<<"Enter the Name: ";
    cin>>Name;
    cout<<"Enter the Address: ";
    cin>>Address;
    cout<<"Enter the Type of Account: ";
    cin>>Type;
    cout<<"Enter the Initial Balance: ";
    cin>>Balance;
}
void BankAccount :: DispNumOfTran()
{

    cout<<"Total Number of Transaction:"<<Number_of_transactions<<endl;
}
