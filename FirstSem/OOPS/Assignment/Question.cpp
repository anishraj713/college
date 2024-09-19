// 1. Write a program in C++ to print welcome text on a separate line.
// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"Welcome\nAnish";
// }

// 2. Write a program in C++ to print the sum of two numbers.
// #include <iostream>
// using namespace std;
// int main(){
// int num1 = 4, num2 = 5;
// cout << num1  + num2;
// }

// 3. Write a C++ program to add two numbers and accept them from the keyboard.
// #include <iostream>
// using namespace std;
// int main(){
// int num1 , num2 ;
// cin>>num1 >>num2;
// cout << num1  + num2;
// }

// 4. Write a in C++ program to find the size of fundamental data types.
// #include <iostream>
// using namespace std;
// int main(){
// cout << sizeof(char)<<endl;
// cout << sizeof(bool)<<endl;
// cout << sizeof(int)<<endl;
// cout << sizeof(float)<<endl;
// cout << sizeof(double)<<endl;
// cout << sizeof(string);
// }

// 5. Write a C++ program to check the upper and lower limits of integers.
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
// cout << "Upper limit of integers : "<<INT_MAX<<endl;
// cout << "Lower limit of integers :"<<INT_MIN;
// }

// 6. Write a C++ program that displays mixed data types and arithmetic operations.
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//   int a = 5;
//   double b = 3.14;
//   char c = 'A';
//   cout << "Addition: " << a + b << endl;
//   cout << "Subtraction: " << a - b << endl;
//   cout << "Multiplication: " << a * b << endl;
//   cout << "Division: " << a / b << endl;
//   int mod = fmod(a,b);
//   cout << "Modulo: " << mod << endl;
//   cout << "Character: " << c << endl;
//   cout << "Integer: " << a << endl;
//   cout << "Double: " << b << endl;
// }

// 7. Write a C++ program to display the operation of pre and post increment and decrement.
// #include <iostream>
// using namespace std;
// int main() {
//   int num = 57;

//   ++num;
//   cout << "After pre-increment by 1, the number is: " << num << endl;

//   num++;
//   cout << "After post-increment by 1, the number is: " << num << endl;

//   --num;
//   cout << "After pre-decrement by 1, the number is: " << num << endl;

//   num--;
//   cout << "After post-decrement by 1, the number is: " << num << endl;
// }

// // 8. Write a C++ program to format the output.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//   int number = 12345;
//   cout << "Formatted integer with 5 digits: " << setw(5) << number << endl;

//   double pi = 3.14159;
//   cout << "Formatted floating-point with 2 decimal places: " << setprecision(2) << pi << endl;

//   string name = "John Doe";
//   cout << "Left-justified string: " << setfill('-') << setw(20) << left << name << endl;

//   bool flag = true;
//   cout << "Boolean value with 'true' for true and 'false' for false: " << boolalpha << flag << endl;
// }

// 9. Write a C++ program that swaps two
// #include <iostream>
// using namespace std;

// void swap(int &a, int &b) {
//   int temp = a;
//   a = b;
//   b = temp;
// }

// int main() {
//   int num1, num2;
//   cout << "Enter the first number: ";
//   cin >> num1;

//   cout << "Enter the second number: ";
//   cin >> num2;

//   cout << "Before swapping: " << endl;
//   cout << "num1 = " << num1 << endl;
//   cout << "num2 = " << num2 << endl;

//   swap(num1, num2);

//   cout << "After swapping: " << endl;
//   cout << "num1 = " << num1 << endl;
//   cout << "num2 = " << num2 << endl;

// }

// 10. Write a C++ program that calculates the volume of a cylinder.
// #include <iostream>
// using namespace std;

// int main() {
//   double radius, height;

//   cout << "Enter the radius of the cylinder: ";
//   cin >> radius;

//   cout << "Enter the height of the cylinder: ";
//   cin >> height;

//   double volume = 3.14159 * radius * radius * height;

//   cout << "The volume of the cylinder is: " << volume << endl;
// }

// 11. Write a C++ program to convert temperature in Celsius to Fahrenheit.
// #include <iostream>
// using namespace std;
// int main() {
//     float celsius, fahrenheit;

//     cout << "Enter the temperature in Celsius: ";
//     cin >> celsius;

//     fahrenheit = (celsius * 9.0 / 5.0) + 32;

//     cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;
// }

// 12. Write a program in C++ to test Type Casting.
// #include <iostream>
// using namespace std;
// int main() {
//   int a = 21;
//   float b = a;
//   cout << "Implicit type casting from int to float: " << b << endl;

//   double c = 3.14;
//   int d = (int)c;
//   cout << "Explicit type casting from double to int: " << d << endl;

//   char ch = 'A';
//   int e = (int)ch;
//   cout << "Type casting from char to int: " << e << endl;
// }

// 13. Write a C++ program that takes a number as input and prints its multiplication table up to 10.
// #include <iostream>
// using namespace std;

// int main() {
//   int number;
//   cout << "Enter a number: ";
//   cin >> number;

//   for (int i = 1; i <= 10; i++) {
//     cout << number << " x " << i << " = " << number * i << endl;
//   }
// }

// 14. Write a C++ program that swaps two variables without using a third variable.
// #include <iostream>
// using namespace std;
// void swap(int& a, int& b) {
//   a = a ^ b;
//   b = a ^ b;
//   a = a ^ b;
// }

// int main() {
//   int num1, num2;

//   cout << "Enter the first number: ";
//   cin >> num1;

//   cout << "Enter the second number: ";
//   cin >> num2;

//   cout << "Before swapping: " << endl;
//   cout << "num1 = " << num1 << endl;
//   cout << "num2 = " << num2 << endl;

//   swap(num1, num2);

//   cout << "After swapping: " << endl;
//   cout << "num1 = " << num1 << endl;
//   cout << "num2 = " << num2 << endl;
// }

// 15. Write a C++ program to show the manipulation of a string.
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//   string str = "Hello, World!";
//   cout << "Original string: " << str << endl;

//   cout << "Character at index 0: " << str[0] << endl;
//   cout << "Character at index 5: " << str[5] << endl;

//   cout << "Length of the string: " << str.length() << endl;

//   cout << "Substring from index 5 to 8: " << str.substr(5, 4) << endl;

//   string str1 = "Programming";
//   string str2 = "is fun";
//   string combinedString = str1 + " " + str2;
//   cout << "Combined string: " << combinedString << endl;

//   str.replace(7, 5, "C++"); 
//   cout << "Modified string: " << str << endl;
// }