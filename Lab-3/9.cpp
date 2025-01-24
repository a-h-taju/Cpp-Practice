/*....09....Build a library inventory management system using arrays. Write a
function that accepts an array of book records and updates the
number of copies available after a book is borrowed.*/

#include <iostream>
#include <string>

using namespace std;

struct Book
{
    string title;
    string author;
    int copiesAvailable;
};

void borrowBook(Book(&books)[5], const string& title)
{
    for (int i = 0; i < 5; ++i)
    {

        if (books[i].title == title)
        {
            if (books[i].copiesAvailable > 0)
            {
                books[i].copiesAvailable--;
                cout << "You've successfully borrowed \"" << books[i].title <<
                     "\".\n";
                return;
            }
            else
            {
                cout << "Sorry, \"" << books[i].title << "\" is not available for borrowing.\n";
                return;
            }
        }
    }
    cout << "Book titled \"" << title << "\" not found in the inventory.\n";
}

void displayBooks(const Book(&books)[5])
{
    cout << "\nLibrary Inventory:\n";
    for (int i = 0; i < 5; ++i)
    {
        cout << "Title: " << books[i].title
             << ", Author: " << books[i].author
             << ", Copies Available: " << books[i].copiesAvailable << endl;
    }
}

int main()
{
    Book books[5] =
    {
        {"The Great Gatsby", "F. Scott Fitzgerald", 3},
        {"1984", "George Orwell", 5},
        {"To Kill a Mockingbird", "Harper Lee", 2},
        {"The Catcher in the Rye", "J.D. Salinger", 0},
        {"Pride and Prejudice", "Jane Austen", 4}

    };

    displayBooks(books);

    string bookToBorrow;
    cout << "\nEnter the title of the book you want to borrow: ";
    getline(cin, bookToBorrow);

    borrowBook(books, bookToBorrow);

    displayBooks(books);

    return 0;
}
