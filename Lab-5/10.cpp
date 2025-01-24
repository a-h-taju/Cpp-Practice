/*....10....You are developing a music playlist and want to find the song with
the longest duration.Create a class called "Song" with attributes for
song title and duration. Implement member functions to update the
song duration and display the song details. Create an array of 15 Song
objects and print the details of the song with the longest duration.*/

#include <iostream>
#include <string>
using namespace std;
class Song
{
private:
    string title;
    double duration;
public:
    Song(string songTitle, double songDuration)
    {
        title = songTitle;
        duration = songDuration;
    }
    void updateDuration(double newDuration)
    {
        duration = newDuration;
    }
    string getTitle() const
    {
        return title;
    }
    double getDuration() const
    {
        return duration;

    }
    void displayDetails() const
    {
        cout << "Song Title: " << title << ", Duration: " << duration << "minutes" << endl;
    }
};
int main()
{
    Song songs[5] =
    {
        Song("Song 1", 3.5),
        Song("Song 2", 4.2),
        Song("Song 3", 2.8),
        Song("Song 4", 5.0),
        Song("Song 5", 4.1),
    };
    for (int i = 0; i < 5; ++i)
    {
        double newDuration;
        cout << "Enter the duration for \"" << songs[i].getTitle() << "\" inminutes: ";
             cin >> newDuration;
        songs[i].updateDuration(newDuration);
    }
    int longestSongIndex = 0;
    double longestDuration = songs[0].getDuration();
    for (int i = 1; i < 5; ++i)
    {
        if (songs[i].getDuration() > longestDuration)
        {
            longestDuration = songs[i].getDuration();
            longestSongIndex = i;

        }
    }
    cout << "\nAll Song Details:\n";
    for (int i = 0; i < 5; ++i)
    {
        songs[i].displayDetails();
    }
    cout << "\nThe song with the longest duration is \"" <<songs[longestSongIndex].getTitle()<< "\" with a duration of " << longestDuration << " minutes." <<endl;
    return 0;
}
