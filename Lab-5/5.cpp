/*....05....You are the manager of a sports team and want to find the player
with the highest score.Create a class called "Player" with attributes
for player name and score. Implement member functions to update
the player's score and display the player details. Create an array of 8
Player objects and print the details of the player with the highest
score.*/

#include <iostream>
#include <string>
using namespace std;
class Player
{
private:
    string name;
    int score;
public:
    Player(string playerName) : name(playerName), score(0) {}
    void updateScore(int newScore)
    {
        score = newScore;
    }
    int getScore() const
    {
        return score;
    }
    string getName() const

    {
        return name;
    }
    void displayDetails() const
    {
        cout << "Player Name: " << name << ", Score: " << score << endl;
    }
};
int main()
{
    Player players[8] =
    {
        Player("Player 1"),
        Player("Player 2"),
        Player("Player 3"),
        Player("Player 4"),
        Player("Player 5"),
        Player("Player 6"),
        Player("Player 7"),
        Player("Player 8")
    };
    for (int i = 0; i < 8; ++i)
    {
        int score;
        cout << "Enter score for " << players[i].getName() << ": ";
        cin >> score;
        players[i].updateScore(score);
    }
    int maxScore = players[0].getScore();

    int maxIndex = 0;
    for (int i = 1; i < 8; ++i)
    {
        if (players[i].getScore() > maxScore)
        {
            maxScore = players[i].getScore();
            maxIndex = i;
        }
    }
    cout << "\nPlayer with the highest score:\n";
    players[maxIndex].displayDetails();
    return 0;
}
