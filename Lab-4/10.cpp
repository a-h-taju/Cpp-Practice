/*....10....You are working on a library management system and need to
create a class called "Book" in C++. The Book class should have
attributes for book ID, title, author, and availability status. Implement
member functions to:
1. Check out the book.
2. Return the book.
3. Display the book details.
Create an instance of the Book class with ID="B001", title="To Kill a
Mockingbird",
author="Harper Lee", and availability status="available". Check out
the book, return it, and
display the updated book details.*/

#include <iostream>

using namespace std;

class Book
{
private:
    string id,title,author;
    bool isAvailable;
public:
    void setData()
    {
        cout << "Enter Book ID: ";
        getline(cin,id);
        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);
        isAvailable = true;
    }
    void checkOut()
    {
        if (isAvailable)
        {
            isAvailable = false;
            cout << "The book \"" << title << "\" has been checked out." <<
                 endl;
        }
        else
        {
            cout << "The book \"" << title << "\" is already checked out." <<
                 endl;
        }
    }
    void returnBook()
    {
        if (!isAvailable)
        {
            isAvailable = true;
            cout << "The book \"" << title << "\" has been returned." << endl;
        }
        else
        {
            cout << "The book \"" << title << "\" was not checked out." <<
                 endl;
        }

    }
    void displayDetails() const
    {
        cout << "Book ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Availability: " << (isAvailable ? "Available" : "Checked Out") << endl;
    }
};
int main()
{
    Book book;
    book.setData();
    book.displayDetails();
    book.checkOut();
    book.displayDetails();
    book.returnBook();
    book.displayDetails();
    return 0;
}
