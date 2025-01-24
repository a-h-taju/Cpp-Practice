/*....12....We want to calculate the total marks of each student in a class in Physics, Chemistry,
and Mathematics and the average marks of the class. The user enters the number of
students in the class. Create a class named Marks with data members for roll number,
name, and marks. Create three other classes inheriting the Marks class, namely
Physics, Chemistry, and Mathematics, which are used to define marks in the
individual subject of each student. The roll number of each student will be generated
automatically.*/

#include<iostream>
using namespace std;
int TotalMark;
class Marks
{
protected:
    int Roll;
    string Name;
public:
    int Mark;
    void Display()
    {
        cout<<"Name: "<<Name<<endl;
        cout<<"Roll: "<<Roll<<endl;
    }
};
class Physics : public Marks
{
public:
    void input(int r, string n)
    {
        Roll = r;
        cin>>Mark;
        Name = n;
        TotalMark+=Mark;
    }
    void DisplayMark()
    {
        cout<<"Mark: "<<Mark<<endl;
    }
};

class Chemistry : public Marks
{
public:
    void input(int r, string n)
    {
        Roll = r;
        cin>>Mark;
        Name = n;
        TotalMark+=Mark;
    }
    void DisplayMark()
    {
        cout<<"Mark: "<<Mark<<endl;
    }
};

class Mathematics : public Marks
{
public:
    void input(int r, string n)
    {
        Roll = r;
        cin>>Mark;
        Name = n;
        TotalMark+=Mark;
    }
    void DisplayMark()
    {
        cout<<"Mark: "<<Mark<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter the number of Student: ";
    cin>>n;
    Physics p[n];
    Chemistry c[n];
    Mathematics m[n];
    for(int i =0; i<n; i++)
    {
        string name;
        cout<<"Enter the Name: ";
        cin>>name;
        cout<<"Enter the marks of Physics: ";
        p[i].input(i+1, name);
        cout<<"Enter the marks of Chemistry: ";
        c[i].input(i+1, name);
        cout<<"Enter the marks of Mathematics: ";
        m[i].input(i+1, name);
    }
    for(int i =0; i<n; i++)
    {
        cout<<"======================\n";
        int TotalOfStudent=0;
        p[i].Display();
        p[i].DisplayMark();
        TotalOfStudent+=p[i].Mark;
        c[i].DisplayMark();
        TotalOfStudent+=c[i].Mark;
        m[i].DisplayMark();
        TotalOfStudent+=m[i].Mark;
        cout<<"Total Mark of the student is: "<<TotalOfStudent<<endl;
        cout<<"======================\n";
    }
    cout<<"Average Marks of the class: "<<(float)TotalMark/(float)n;

    return 0;
}

