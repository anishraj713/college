/*
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head = NULL;
void insert(int newdata)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = newdata;
    newnode->prev = NULL;
    newnode->next = head;
    if (head != NULL)
        head->prev = newnode;
    head = newnode;
}
void display()
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    cout << "The doubly linked list is: ";
    display();
    return 0;
}
*/
///////////////////////////////////////////////////
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;

// Function to insert a new node at the end of the doubly linked list
void insert(int newdata)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = newdata;
    newnode->next = NULL;

    if (head == NULL)
    {
        newnode->prev = NULL;
        head = newnode;
        return;
    }

    struct Node *last = head;
    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = newnode;
    newnode->prev = last;
}

// Function to insert a new node at a specified position in the doubly linked list
void insertAtPosition(int newdata, int position)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = newdata;

    if (position <= 0)
    {
        cout << "Invalid position. Node not inserted." << endl;
        return;
    }

    if (position == 1)
    {
        newnode->next = head;
        newnode->prev = NULL;
        if (head != NULL)
        {
            head->prev = newnode;
        }
        head = newnode;
        return;
    }

    struct Node *current = head;
    for (int i = 1; i < position - 1 && current != NULL; ++i)
    {
        current = current->next;
    }

    if (current == NULL)
    {
        cout << "Invalid position. Node not inserted." << endl;
        return;
    }

    newnode->next = current->next;
    newnode->prev = current;
    if (current->next != NULL)
    {
        current->next->prev = newnode;
    }
    current->next = newnode;
}

// Function to delete a node with a given value from the doubly linked list
void deleteNode(int value)
{
    struct Node *current = head;

    while (current != NULL && current->data != value)
    {
        current = current->next;
    }

    if (current == NULL)
    {
        cout << "Node with value " << value << " not found. Cannot delete." << endl;
        return;
    }

    if (current->prev != NULL)
    {
        current->prev->next = current->next;
    }
    else
    {
        head = current->next;
    }

    if (current->next != NULL)
    {
        current->next->prev = current->prev;
    }

    free(current);
    cout << "Node with value " << value << " deleted." << endl;
}

// Function to display the doubly linked list
void display()
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    // Inserting elements into the doubly linked list
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);

    // Displaying the doubly linked list
    cout << "The doubly linked list is: ";
    display();

    // Inserting a new node at a specified position
    insertAtPosition(5, 3);
    cout << "Doubly linked list after insertion: ";
    display();

    // Deleting a node with a specified value
    deleteNode(7);
    cout << "Doubly linked list after deletion: ";
    display();

    return 0;
}