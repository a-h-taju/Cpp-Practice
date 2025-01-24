/*....11....Implement a class FileManager with attributes fileName and isOpen. Open the file in the
constructor and close it in the destructor. Add member functions to read or write data into
the file and display file status.*/

#include<iostream>
using namespace std;
class fileManager
{
public:
    string fileName;
    int isOpen;
    fileManager()
    {
        string name;
        cout<<"Enter file name: ";
        cin>>name;
        isOpen = 1;
        fileName = name;
    }
    ~fileManager()
    {
        isOpen = 0;
    }
    void display()
    {
        if(isOpen)
            cout<<fileName<<" Status: Open"<<endl;
        else
            cout<<fileName<<" Status: Closed"<<endl;
    }
    void readFile()
    {
        display();
        cout<<"Reading "<<fileName<<"....\n"<<endl;
    }
    void writeFile()
    {
        display();
        cout<<"Writing "<<fileName<<"....\n"<<endl;
    }
};
int main()
{
    fileManager file1, file2, file3;
    file1.readFile();
    file1.writeFile();
    file2.readFile();
    file2.writeFile();
    file3.readFile();
    file3.writeFile();
    return 0;
}
