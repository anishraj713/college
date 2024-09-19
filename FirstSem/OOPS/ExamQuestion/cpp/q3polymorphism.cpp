// Develop an application using C++ for demonstrating the concept of Polymorphism.
#include <iostream>
using namespace std;
class Geek
{
public:
    void fun(int x)
    {
        cout << x << endl;
    }
    void fun(double y)
    {
        cout << y << endl;
    }
    void fun(int a, int b)
    {
        cout << a << "," << b << endl;
    }
};

int main()
{
    Geek obj1;
    obj1.fun(15);
    obj1.fun(89.77);
    obj1.fun(22, 45);
}