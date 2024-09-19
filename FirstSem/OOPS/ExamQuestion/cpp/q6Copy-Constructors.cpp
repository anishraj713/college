/*
#include <iostream>
using namespace std;

class Wall
{
private:
    int length;
    int height;

public:
    Wall(int ln, int ht)
    {
        length = ln;
        height = ht;
    }
    Wall(Wall &obj)
    {
        length = obj.length;
        height = obj.height;
    }
    int calcArea()
    {
        return length * height;
    }
};

int main()
{
    Wall wall1(10, 40);
    Wall wall2 = wall1;

    cout << "Area of Original Wall: " << wall1.calcArea() << endl;
    cout << "Area of Copy Wall: " << wall2.calcArea() << endl;
}
*/

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
    Student(string x, int y, char z)
    {
        Name = x;
        Roll = y;
        Section = z;
    }
    Student(Student &obj)
    {
        Name = obj.Name;
        Roll = obj.Roll;
        Section = obj.Section;
    }
    void display()
    {
        cout << Name << " Roll No is " << Roll << " From Section " << Section << endl;
    }
};

int main()
{
    Student s1("Anish", 101, 'A');
    s1.display();
    Student s2(s1);
    s2.display();
    return 0;
}