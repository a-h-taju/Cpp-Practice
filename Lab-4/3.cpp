/*....03....You are designing a game and need to create a class called "Player"
in C++. The Player class should have attributes for player name, level,
and score. Implement member functions to:
1. Increase the player's score by a given amount.
2. Level up the player.
Create an instance of the Player class with name="Alice", level=1, and
score=100. Increase the score by 50 and level up the player. Print the
updated player details.*/

#include<iostream>
using namespace std;
class player
{
public:
    string name;
    int level,score,increaseScore;
    void increasingScore(int x)
    {
        score+=x;
    }
    void levelUp()

    {
        level++;
    }
    void playerDetails()
    {
        cout<<"Name= "<<name<<endl;
        cout<<"Level= "<<level<<endl;
        cout<<"Score= "<<score<<endl;
    }
};
int main()
{
    player Player;
    int increaseScore;
    cout<<"Enter the player name=";
    cin>>Player.name;
    cout<<"Enter the player level=";
    cin>>Player.level;
    cout<<"Enter the player score=";
    cin>> Player.score;

    cout<<"Enter the increasing score=";
    cin>>increaseScore;
    Player.increasingScore(50);
    Player.levelUp();

    Player.playerDetails();

    return 0;
}
