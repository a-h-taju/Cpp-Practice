#include <iostream>
using namespace std;

class Character
{
private:
    int health;

public:
    Character(int h)
    {
        health = h;
    }

    Character operator+()
    {
        return Character(health += 20);
        //return *this;
    }
    void display()
    {
        cout<<health<<endl;
    }
};

int main()
{
    Character player(50);

    cout << "Initial health: ";
    player.display();

    Character p = +player;

    cout << "Health after picking up health potion: ";
    player.display();

    return 0;
}

