/*
#include <iostream>
#include <queue>
using namespace std;

// Define a custom structure to hold both value and priority
struct Element
{
    int value;
    int priority;

    // Define the comparison operator for priority queue
    bool operator<(const Element &other) const
    {
        // Higher priority should have lower value
        return priority > other.priority;
    }
};

// Function to insert a new element into the priority queue
void insertElement(priority_queue<Element> &pq)
{
    Element element;
    cout << "Enter value for the new element: ";
    cin >> element.value;
    cout << "Enter priority for the new element: ";
    cin >> element.priority;
    pq.push(element);
    cout << "Element inserted successfully." << endl;
}

// Function to delete an element with a specified priority from the priority queue
void deleteElement(priority_queue<Element> &pq)
{
    if (pq.empty())
    {
        cout << "Priority Queue is empty. Cannot delete." << endl;
        return;
    }

    int priorityToDelete;
    cout << "Enter the priority you want to delete: ";
    cin >> priorityToDelete;

    priority_queue<Element> tempQueue;
    while (!pq.empty())
    {
        Element current = pq.top();
        pq.pop();

        if (current.priority == priorityToDelete)
        {
            cout << "Deleted Element - Value: " << current.value << " Priority: " << current.priority << endl;
        }
        else
        {
            tempQueue.push(current);
        }
    }

    // Restoring the elements back to the original priority queue
    swap(pq, tempQueue);
}

int main()
{
    // Create a priority queue of custom elements
    priority_queue<Element> pq;

    int choice;
    do
    {
        cout << "\nMenu:\n1. Insert Element\n2. Delete Element by Priority\n3. Display Elements\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            insertElement(pq);
            break;
        case 2:
            deleteElement(pq);
            break;
        case 3:
            // Display elements in priority order
            cout << "Priority Queue Elements: ";
            if (!pq.empty())
            {
                priority_queue<Element> tempQueue = pq;
                while (!tempQueue.empty())
                {
                    Element current = tempQueue.top();
                    cout << "Value: " << current.value << " Priority: " << current.priority << " | ";
                    tempQueue.pop();
                }
            }
            else
            {
                cout << "Priority Queue is empty." << endl;
            }
            cout << endl;
            break;
        case 4:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}
*/
// //////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <queue>
using namespace std;

struct Element
{
    int value;
    int priority;

    // Overloading the less-than operator for comparison
    bool operator<(const Element &other) const
    {
        return priority < other.priority;
    }
};

int main()
{
    priority_queue<Element> priorityQueue;

    while (true)
    {
        int choice;
        cout << "Enter your choice (1 for insert, 2 for delete, 3 for print, 4 for exit): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Element element;
            cout << "Enter the element value: ";
            cin >> element.value;
            cout << "Enter the element priority: ";
            cin >> element.priority;
            priorityQueue.push(element);
            break;
        }
        case 2:
        {
            if (!priorityQueue.empty())
            {
                priorityQueue.pop();
            }
            else
            {
                cout << "Priority queue is empty. Cannot delete.\n";
            }
            break;
        }
        case 3:
        {
            priority_queue<Element> tempQueue = priorityQueue;

            cout << "Priority Queue elements (value, priority): ";
            while (!tempQueue.empty())
            {
                cout << "(" << tempQueue.top().value << ", " << tempQueue.top().priority << ") ";
                tempQueue.pop();
            }
            cout << endl;
            break;
        }
        case 4:
        {
            return 0;
        }
        }
    }

    return 0;
}
