/*....08....Develop a program that counts the occurrences of a specific
character in a given string. Use loops and functions for this task.*/

#include <iostream>
#include <string>
using namespace std;

int countCharacterOccurrences(const string& str, char ch)
{
    int count = 0;
    for (char c : str)
    {
        if (c == ch)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string inputString;
    char characterToCount;
    cout << "Enter a string: ";
    getline(cin, inputString);
    cout << "Enter the character to count: ";
    cin >> characterToCount;
    int occurrences = countCharacterOccurrences(inputString,
                      characterToCount);
    cout << "The character '" << characterToCount << "' occurs " <<
         occurrences << " times in the string." << endl;
    return 0;
}
