// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     queue <string> animals;
//     animals.push("cat");
//     animals.push("dog");
//     animals.push("bear");

//     animals.pop();
//     animals.pop();

//     while(!animals.empty()){
//         cout<<animals.front()<<",";
//         animals.pop();
//     }
//     cout<<endl;
// }

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> animals;

    int n;
    cout << "Enter the number of animals: ";
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string animal;
        cout << "Enter animal " << i + 1 << ": ";
        cin >> animal;
        animals.push(animal);
    }

    int numToPop;
    cout << "Enter the number of elements to pop: ";
    cin >> numToPop;

    for (int i = 0; i < numToPop; ++i)
    {
        if (!animals.empty())
        {
            animals.pop();
        }
        else
        {
            cout << "Queue is empty." << endl;
            break;
        }
    }

    while (!animals.empty())
    {
        cout << animals.front() << ",";
        animals.pop();
    }
    cout << endl;

    return 0;
}