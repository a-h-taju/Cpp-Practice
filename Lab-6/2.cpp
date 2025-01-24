/*....02....Create a class Book with attributes title, author, and isAvailable. Use
a default constructor to set all attributes to default values. Add
member functions to update availability when a book is borrowed or
returned, and display the book details.*/

#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
    string title;
    string author;
    bool isAvailable;

    Book()
    {
        title = "Unknown";
        author = "Unknown";
        isAvailable = true;

    }

    void borrow()
    {
        if (isAvailable)
        {
            isAvailable = false;
            cout << "Book borrowed successfully." << endl;
        }
        else
        {
            cout << "Book is not available for borrowing." << endl;
        }
    }

    void returnBook()
    {
        if (!isAvailable)
        {
            isAvailable = true;
            cout << "Book returned successfully." << endl;
        }

        else
        {
            cout << "Book is already available." << endl;
        }
    }

    void displayDetails()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Availability: " << (isAvailable ? "Available" : "Not Available") << endl;
    }
};

int main()
{
    Book book1;

    book1.title = "ANCI C";
    book1.author = "Balagurusamy";

    book1.displayDetails();

    cout<<endl;
    book1.borrow();
    book1.displayDetails();
    cout<<endl;
    book1.returnBook();
    book1.displayDetails();

    return 0;
}
