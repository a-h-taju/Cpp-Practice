/*....13....You are organizing a movie marathon and need to keep track of
the movies and their genres. Create a class called "Movie" with
attributes for movie title and genre.Implement member functions to
update the movie genre and display the movie details.Create an array
of 9 Movie objects and print the details of all movies along with their
genres.*/

#include <iostream>
#include <string>
using namespace std;
class Movie
{
private:
    string title;
    string genre;
public:
    Movie()
    {
        title = "";
        genre = "";
    }
    void setMovieDetails(string t, string g)
    {
        title = t;
        genre = g;
    }
    void displayMovieDetails() const
    {
        cout << "Title: " << title << ", Genre: " << genre << endl;
    }
    void updateGenre(string newGenre)

    {
        genre = newGenre;
    }
};
int main()
{
    Movie movies[9];
    string title, genre;
    cout << "Enter details for 9 movies:\n";
    for (int i = 0; i < 9; i++)
    {
        cout << "Enter title for movie " << i + 1 << ": ";
        getline(cin, title);
        cout << "Enter genre for movie " << i + 1 << ": ";
        getline(cin, genre);
        movies[i].setMovieDetails(title, genre);
        cout << endl;
    }
    cout << "\nMovie Marathon Details:\n";
    for (int i = 0; i < 9; i++)
    {
        movies[i].displayMovieDetails();
    }
    return 0;
}
