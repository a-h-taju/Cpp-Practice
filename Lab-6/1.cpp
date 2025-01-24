/*....01....Design a class ParkingSlot with attributes slotNumber and
isOccupied. Use a default constructor to initialize all parking slots as
empty. Write member functions to mark a slot as occupied and display
the slot status.*/

#include <iostream>

using namespace std;

class parking_slot
{
    int slot_number;
    bool isOccupied;

public:
    parking_slot()
    {
        slot_number = 0;
        isOccupied = false;
    }

    void initialize(int a)
    {

        slot_number = a;
        isOccupied = false;
    }

    void marking_slot()
    {
        if (isOccupied)
        {
            cout << "Slot " << slot_number << " is empty." << endl;
        }
        else
        {
            isOccupied = true;
            cout << "Slot " << slot_number << " is mark as occupied." << endl;
        }
    }

    void display() const
    {
        if (isOccupied)
        {
            cout << "Slot " << slot_number << " is occupied." << endl;

        }
        else
        {
            cout << "Slot " << slot_number << " is empty." << endl;
        }
    }
};

int main()
{
    const int num = 10;
    parking_slot parking[num];

    for (int i = 0; i < num; i++)
    {
        parking[i].initialize(i + 1);
    }

    cout << "Initial state of parking slots:" << endl;
    for (int i = 0; i < num; i++)
    {
        parking[i].display();

    }

    cout << endl << "Marking some slots as occupied:" << endl;
    parking[1].marking_slot();
    parking[3].marking_slot();
    parking[5].marking_slot();
    parking[7].marking_slot();
    parking[9].marking_slot();

    cout << endl << "Updated state of parking slots:" << endl;
    for (int i = 0; i < num; i++)
    {
        parking[i].display();
    }

    return 0;
}
