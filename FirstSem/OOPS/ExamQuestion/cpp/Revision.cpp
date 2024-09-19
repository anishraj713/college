// Class And Object
// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     int Rank;
//     string Name;
//     char Section;

//     void display()
//     {
//         cout << Rank << Name << Section << endl;
//     }
// };

// int main()
// {
//     Student s1;
//     s1.Rank = 101;
//     s1.Name = "Anish";
//     s1.Section = 'A';

//     s1.display();
// }

// Constructor
// #include <iostream>
// using namespace std;
// class Wall
// {
// private:
//     int length;

// public:
//     Wall()
//     {

//         length = 10;
//         cout << length;
//     }
// };
// int main()
// {
//     Wall wall1;
//     return 0;
// }

// Polymorphism
// #include <iostream>
// using namespace std;
// class Geek
// {
// public:
//     void fun(int x)
//     {
//         cout << x << endl;
//     }
//     void fun(double y, double z)
//     {
//         cout << y << " " << z << endl;
//     }
//     void fun(int a, int b, int c)
//     {
//         cout << a << " " << b << " " << c << endl;
//     }
// };

// int main()
// {
//     Geek h1;
//     h1.fun(10);
//     h1.fun(10.9, 8.9);
//     h1.fun(10, 20, 30);
// }

// Operator Overloading
// #include <iostream>
// using namespace std;
// class Count
// {
// private:
//     int value;

// public:
//     Count() : value(5)
//     {
//     }

//     void operator ++()
//     {
//         ++value;
//     }
//     void display()
//     {
//         cout << value;
//     }
// };
// int main()
// {
//     Count c1;
//     ++c1;
//     c1.display();
// }

