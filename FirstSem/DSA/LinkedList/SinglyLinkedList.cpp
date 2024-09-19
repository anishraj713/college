/*
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insert(int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
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
    cout << "The linked list is: ";
    display();
    return 0;
}
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = nullptr;

void insert(int new_data)
{
    Node *new_node = new Node;
    new_node->data = new_data;
    new_node->next = nullptr;

    if (head == nullptr)
    {
        head = new_node;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void display()
{
    Node *ptr = head;
    while (ptr != nullptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

void deleteNode(int value)
{
    if (head == nullptr)
    {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "Node with value " << value << " deleted." << endl;
        return;
    }

    Node *prev = nullptr;
    Node *curr = head;

    while (curr != nullptr && curr->data != value)
    {
        prev = curr;
        curr = curr->next;
    }

    if (curr == nullptr)
    {
        cout << "Node with value " << value << " not found. Cannot delete." << endl;
        return;
    }

    prev->next = curr->next;
    delete curr;
    cout << "Node with value " << value << " deleted." << endl;
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

    cout << "The linked list is: ";
    display();

    int valueToDelete;
    cout << "Enter the value to delete: ";
    cin >> valueToDelete;

    deleteNode(valueToDelete);

    cout << "Updated linked list: ";
    display();

    return 0;
}
