// Develop an application using C++ for demonstrating the concept of Constructors
#include <iostream>
using namespace std;

class Student
{
private:
    string Name;
    int Roll;
    char Section;

public:
    Student()
    {
        cout << "Enter name: ";
        cin >> Name;
        cout << "Enter Roll No: ";
        cin >> Roll;
        cout << "Enter your Section: ";
        cin >> Section;
    }
    void display()
    {
        cout << Name << " Roll No is " << Roll << " From Section " << Section;
    }
};

int main()
{
    Student s1;
    s1.display();
    return 0;
}