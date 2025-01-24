/*....11....You are organizing a conference and need to keep track of the
speakers and their presentation topics. Create a class called "Speaker"
with attributes for speaker name and topic. Implement member
functions to update the speaker's topic and display the speaker
details. Create an array of 10 Speaker objects and print the details of
all speakers along with their topics.*/

#include <iostream>
#include <string>
using namespace std;
class Speaker
{
private:
    string name;
    string topic;
public:
    Speaker(string speakerName, string speakerTopic)
    {
        name = speakerName;
        topic = speakerTopic;
    }
    void updateTopic(string newTopic)
    {
        topic = newTopic;
    }
    string getName() const
    {
        return name;
    }
    string getTopic() const
    {

        return topic;
    }
    void displayDetails() const
    {
        cout << "Speaker: " << name << ", Topic: " << topic << endl;
    }
};
int main()
{
    Speaker speakers[10] =
    {
        Speaker("John Doe", "AI and Machine Learning"),
        Speaker("Jane Smith", "Cybersecurity in 2024"),
        Speaker("Sam Brown", "Quantum Computing"),
        Speaker("Alice White", "Future of Web Development"),
        Speaker("Bob Green", "Blockchain Technology"),
        Speaker("Charlie Black", "Cloud Computing"),
        Speaker("Emily Blue", "Data Science and Analytics"),
        Speaker("Michael Red", "Robotics in Modern Industries"),
        Speaker("Rachel Purple", "Sustainable Technology Solutions"),
        Speaker("David Yellow", "Augmented Reality and Virtual Reality")
    };
    for (int i = 0; i < 10; ++i)
    {
        string newTopic;
        cout << "Enter the new topic for " << speakers[i].getName() << ": ";
        cin.ignore();
        getline(cin, newTopic);
        speakers[i].updateTopic(newTopic);
    }
    cout << "\nSpeaker Details for the Conference:\n";
    for (int i = 0; i < 10; ++i)
    {

        speakers[i].displayDetails();
    }
    return 0;
}
