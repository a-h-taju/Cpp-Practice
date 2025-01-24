#include <iostream>
#include <string>
using namespace std;

class Player
{
    string name;
    int points;

public:
    Player(string playerName, int playerPoints)
    {
        name = playerName;
        points = playerPoints;
    }
    int operator+(Player &other)
    {
        return points + other.points;
    }
    void display()
    {
        cout << "Player: " << name << ", Points: " << points << endl;
    }
};

int main()
{
    Player player1("Taju", 50);
    Player player2("Babu", 70);
    player1.display();
    player2.display();
    int teamScore = player1 + player2;
    cout << "Team Score: " << teamScore << endl;

    return 0;
}

