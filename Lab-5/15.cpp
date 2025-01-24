/*....15....Write a program to create a directory that contains the following
information.
(a) Name of a person
(b) Address
(c) Telephone Number (if available with STD code)
(d) Mobile Number (if available)
(e) Head of the family*/

#include <iostream>
#include <string>
using namespace std;
class Directory
{
private:
    string name;
    string address;
    string telephoneNumber;
    string mobileNumber;
    string headOfFamily;
public:
    Directory()
    {
        name = "";
        address = "";
        telephoneNumber = "";
        mobileNumber = "";
        headOfFamily = "No";
    }
    void inputDetails()
    {
        cout << "Enter the name of the person: ";

        getline(cin, name);
        cout << "Enter the address: ";
        getline(cin, address);
        cout << "Enter the telephone number (with STD code if available):";
             getline(cin, telephoneNumber);
        cout << "Enter the mobile number (if available): ";
        getline(cin, mobileNumber);
        cout << "Is this person the head of the family? (Yes/No): ";
        getline(cin, headOfFamily);
    }
    void displayDetails() const
    {
        cout << "\nName: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Telephone Number: " << telephoneNumber << endl;
        cout << "Mobile Number: " << mobileNumber << endl;
        cout << "Head of the Family: " << headOfFamily << endl;
        cout << "----------------------------------------" << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the number of people to store in the directory: ";
    cin >> n;
    cin.ignore();
    Directory directory[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for person " << i + 1 << ":\n";
        directory[i].inputDetails();
    }

    cout << "\nDirectory Information:\n";
    for (int i = 0; i < n; i++)
    {
        directory[i].displayDetails();
    }
    return 0;
}
