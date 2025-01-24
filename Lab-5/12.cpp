/*....12....You are developing a video game and want to find the character
with the highest level.Create a class called "Character" with attributes
for character name and level.Implement member functions to update
the character's level and display the character details. Create an array
of 20 Character objects and print the details of the character with the
highest level.*/

#include <iostream>
#include <string>
using namespace std;
class Character
{
private:
    string name;
    int level;
public:
    Character(string characterName, int characterLevel)
    {
        name = characterName;
        level = characterLevel;
    }
    void updateLevel(int newLevel)
    {
        level = newLevel;
    }
    string getName() const
    {
        return name;
    }
    int getLevel() const
    {

        return level;
    }
    void displayDetails() const
    {
        cout << "Character: " << name << ", Level: " << level << endl;
    }
};
int main()
{
    Character characters[10] =
    {
        Character("Warrior", 5),
        Character("Mage", 7),
        Character("Archer", 10),
        Character("Knight", 12),
        Character("Thief", 3),
        Character("Paladin", 8),
        Character("Sorcerer", 6),
        Character("Hunter", 9),
        Character("Necromancer", 4),
        Character("Cleric", 11),
    };
    for (int i = 0; i < 10; ++i)
    {
        int newLevel;
        cout << "Enter the level for " << characters[i].getName() << ": ";
        cin >> newLevel;
        characters[i].updateLevel(newLevel);
    }
    int highestLevelIndex = 0;
    int highestLevel = characters[0].getLevel();
    for (int i = 1; i < 10; ++i)
    {

        if (characters[i].getLevel() > highestLevel)
        {
            highestLevel = characters[i].getLevel();
            highestLevelIndex = i;
        }
    }
    cout << "\nCharacter Details:\n";
    for (int i = 0; i < 10; ++i)
    {
        characters[i].displayDetails();
    }
    cout << "\nThe character with the highest level is \""
         << characters[highestLevelIndex].getName()
         << "\" with a level of " << highestLevel << "." << endl;
    return 0;
}
