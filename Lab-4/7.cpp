/*....07....You are developing a music player application and need to create a
class called "Song" in C++.The Song class should have attributes for
song title, artist name, and duration. Implement a member function
to:
1. Display the details of the song.
Create an instance of the Song class with title="Bohemian Rhapsody",
artist name="Queen", and duration="5:55". Call the display function
to print the song details.*/

#include<iostream>

using namespace std;

class Song
{
public:
    string songTitle,artistName,duration;
    void songDetails()
    {
        cout<<"Song Title = "<<songTitle<<endl;
        cout<<"Song Artist Name = "<<artistName<<endl;
        cout<<"Song Duration = "<<duration<<endl;
    }
};
int main()
{
    Song song;
    song.songTitle="Bohemian Rhapsody";
    song.artistName="Queen";

    song.duration="5:55";
    song.songDetails();
    return 0;
}
