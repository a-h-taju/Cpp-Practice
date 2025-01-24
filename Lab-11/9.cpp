/*Design a simple game with different types of characters. Create a base class
GameCharacter with a virtual function attack(). Derive classes Warrior and Mage,
overriding attack() to implement their unique attack methods. Use a base class pointer to
call the appropriate attack() function during gameplay.*/
#include <iostream>
using namespace std;

class GameCharacter
{
public:
    virtual void attack()
    {
        cout << "Game character is attacking!" << endl;
    }
};
class Warrior : public GameCharacter
{
public:
    void attack()
    {
        cout << "Warrior slashes with a sword!" << endl;
    }
};
class Mage : public GameCharacter
{
public:
    void attack()
    {
        cout << "Mage casts a powerful fireball!" << endl;
    }
};

int main()
{
    Warrior warrior;
    Mage mage;

    GameCharacter* character;
    character = &warrior;
    character = &mage;

    cout << "Character 1's attack: ";
    character ->attack();

    cout << "Character 2's attack: ";
    character ->attack();

    return 0;
}
