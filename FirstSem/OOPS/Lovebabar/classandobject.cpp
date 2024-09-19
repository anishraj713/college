// TOPIC: Basics OOPS
// #include<iostream>
// using namespace std;

// // created a class
// class residentEvil {
// // Define the property of object
// public: /*By default class is "private" so we can not access it from outside the class.if we want to access the class we have make it "public".*/
// string name;
// int health;
// char level;
// };

// int main(){
//     // Creation of object
// residentEvil character;

// // Assigning Value
// character.name = "leon";
// character.health = 70;
// character.level = 'A';

// // Print the value of object
// cout<<"Name: "<<character.name<<endl;
// cout<<"Health: "<<character.health<<endl;
// cout<<"Level: "<<character.level<<endl;

// // To know the size of class
// // cout<<sizeof(character)<<endl;
// }


// TOPIC: Getter and Setter
#include<iostream>
using namespace std;

// created a class
class residentEvil {
// Define the property of object
/*By default class is "private" so we can not access it from outside the class.if we want to access the class we have make it "public".*/
int health;

public:
char level;
string name;

int getHealth(){
    return health;}
int getLevel(){
    return level;}
void setHealth (int h){
    health = h;}
void setLevel(int ch){
    level = ch;}
};

int main(){
    // Creation of object
residentEvil character;

// Assigning Value
character.name = "leon";
// Use Setter
character.setHealth(70);
character.setLevel('A');

// Print the value of object
cout<<"Name: "<<character.name<<endl;
// Use Getter
cout<<"Health: "<<character.getHealth()<<endl;
cout<<"Level: "<<character.getLevel()<<endl;

// To know the size of class
// cout<<sizeof(character)<<endl;
}

