#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    string name;
    char Section;

    void display()
    {
        cout << "Id: " << id << " Name: " << name << " Section: " << Section;
    }
};

int main()
{
    Student s1;
    s1.id = 101;
    s1.name = "Anish";
    s1.Section = 'A';

    s1.display();
}