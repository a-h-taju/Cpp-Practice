/*....20....Implement a class Patient with attributes patientID, name, and disease.
 Use a default constructor to register walk-in patients without initial diagnosis.
 Use a parameterized constructor for patients with a known disease.
 Use a copy constructor to transfer patient details to a referral system.
  Add member functions to update and display patient details.*/

#include <iostream>
#include <string>
using namespace std;

class Patient
{
private:
    int patientID;
    string name;
    string disease;

public:
    Patient()
    {
        patientID = 0;
        name = "Walk-in Patient";
        disease = "Not Diagnosed";
    }
    Patient(int id, string pname, string pdisease)
    {
        patientID = id;
        name = pname;
        disease = pdisease;
    }
    Patient(const Patient &p)
    {
        patientID = p.patientID;
        name = p.name;
        disease = p.disease;
    }
    void updateDetails(int id, string pname, string pdisease)
    {
        patientID = id;
        name = pname;
        disease = pdisease;
    }
    void displayDetails()
    {
        cout << "Patient ID: " << patientID << endl;
        cout << "Name: " << name << endl;
        cout << "Disease: " << disease << endl;
    }
};

int main()
{
    Patient walkIn;
    cout << "Walk-in Patient Details:\n";
    walkIn.displayDetails();

    Patient diagnosed(101, "John Doe", "Flu");
    cout << "\nDiagnosed Patient Details:\n";
    diagnosed.displayDetails();

    Patient referral(diagnosed);
    cout << "\nReferral Patient Details:\n";
    referral.displayDetails();

    cout << "\nUpdating Walk-in Patient Details:\n";
    walkIn.updateDetails(102, "Jane Smith", "Cold");
    walkIn.displayDetails();

    return 0;
}

