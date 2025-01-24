/*....06....You are building a library catalogue and need to store information
about different books. Create a class called "Book" with attributes for
book title, author, and availability status. Implement member
functions to mark a book as borrowed and display the book details.
Create an array of 10 Book objects and print the details of all available
books.*/

#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    string title;
    string author;
    bool isAvailable;
public:
    Book(string bookTitle, string bookAuthor)
    {
        title = bookTitle;
        author = bookAuthor;
        isAvailable = true;
    }
    void borrowBook()
    {
        isAvailable = false;
    }
    void displayDetails() const
    {
        if (isAvailable)
        {

            cout << "Title: " << title << ", Author: " << author << " - Available"
                 << endl;
        }
    }
    bool checkAvailability() const
    {
        return isAvailable;
    }
    string getTitle() const
    {
        return title;
    }
    string getAuthor() const
    {
        return author;
    }
};
int main()
{
    Book books[10] =
    {
        Book("The Great Gatsby", "F. Scott Fitzgerald"),
        Book("1984", "George Orwell"),
        Book("To Kill a Mockingbird", "Harper Lee"),
        Book("Pride and Prejudice", "Jane Austen"),
        Book("The Catcher in the Rye", "J.D. Salinger"),
        Book("Moby Dick", "Herman Melville"),
        Book("War and Peace", "Leo Tolstoy"),
        Book("The Odyssey", "Homer"),
        Book("The Divine Comedy", "Dante Alighieri"),
        Book("The Hobbit", "J.R.R. Tolkien")
    };
    int bookToBorrow;

    char borrowChoice;
    cout << "Library Catalogue:\n";
    for (int i = 0; i < 10; ++i)
    {
        cout << i + 1 << ". " << books[i].getTitle() << " by " <<
             books[i].getAuthor() << endl;
    }
    cout << "\nWould you like to borrow any book? (y/n): ";
    cin >> borrowChoice;
    while (borrowChoice == 'y' || borrowChoice == 'Y')
    {
        cout << "Enter the number of the book you want to borrow (1-10):";
             cin >> bookToBorrow;
        if (bookToBorrow >= 1 && bookToBorrow <= 10)
        {
            books[bookToBorrow - 1].borrowBook();
            cout << "You borrowed \"" << books[bookToBorrow -
                                                            1].getTitle() << "\" by " <<
                 books[bookToBorrow - 1].getAuthor() << endl;
        }
        else
        {
            cout << "Invalid book number. Please try again.\n";
        }
        cout << "\nWould you like to borrow another book? (y/n): ";
        cin >> borrowChoice;
    }
    cout << "\nAvailable books in the library:\n";
    for (int i = 0; i < 10; ++i)
    {
        books[i].displayDetails();
    }

    return 0;
}
