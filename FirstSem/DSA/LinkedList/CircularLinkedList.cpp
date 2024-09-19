/*
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insert(int newdata)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = head;
    newnode->data = newdata;
    newnode->next = head;
    if (head != NULL)
    {
        while (ptr->next != head)
            ptr = ptr->next;
        ptr->next = newnode;
    }
    else
        newnode->next = newnode;
    head = newnode;
}
void display()
{
    struct Node *ptr;
    ptr = head;
    do
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != head);
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    cout << "The circular linked list is: ";
    display();
    return 0;
}
*/
/////////////////////////////////////////////////////
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = nullptr;

// Function to insert a new node at the end of the circular linked list
void insert(int newdata)
{
    struct Node *newnode = new Node;
    newnode->data = newdata;
    newnode->next = nullptr;

    if (head == nullptr)
    {
        // If the list is empty, make the new node the head and point it to itself
        head = newnode;
        head->next = head;
    }
    else
    {
        // Traverse to the last node
        struct Node *last = head;
        while (last->next != head)
        {
            last = last->next;
        }

        // Insert the new node at the end
        last->next = newnode;
        newnode->next = head;
    }
}

// Function to display the circular linked list
void display()
{
    struct Node *ptr = head;
    do
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != head);
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i)
    {
        int value;
        cin >> value;
        insert(value);
    }

    // Displaying the circular linked list
    cout << "The circular linked list is: ";
    display();

    return 0;
}