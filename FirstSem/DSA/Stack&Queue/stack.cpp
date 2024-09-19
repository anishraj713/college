// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// stack<int> stack;
// stack.push(21);
// stack.push(22);
// stack.push(23);
// stack.push(24);
// int num = 0;
// stack.push(num);
// stack.pop();
// stack.pop();
// stack.pop();

// while(!stack.empty()){
//     cout<<stack.top() <<" ";
//     stack.pop();
// }
// }

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> myStack;

    while (true)
    {
        cout << "1. Insert element\n";
        cout << "2. Delete element\n";
        cout << "3. Print stack\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            // Insert element
            int element;
            cout << "Enter the element to insert: ";
            cin >> element;
            myStack.push(element);
            cout << "Element " << element << " inserted into the stack.\n";
            break;
        }

        case 2:
        {
            // Delete element
            if (!myStack.empty())
            {
                cout << "Element " << myStack.top() << " deleted from the stack.\n";
                myStack.pop();
            }
            else
            {
                cout << "Stack is empty. Cannot delete.\n";
            }
            break;
        }

        case 3:
        {
            // Print stack
            cout << "Stack elements: ";
            stack<int> tempStack = myStack; // Create a copy to preserve the original stack
            while (!tempStack.empty())
            {
                cout << tempStack.top() << " ";
                tempStack.pop();
            }
            cout << endl;
            break;
        }

        case 4:
            // Exit the program
            cout << "Exiting program.\n";
            return 0;
        }
    }
}