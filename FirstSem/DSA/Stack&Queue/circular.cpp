// #include <iostream>
// using namespace std;

// #define MAX_SIZE 5

// struct CircularQueue
// {
//     int front, rear;
//     int arr[MAX_SIZE];
// };

// bool isEmpty(CircularQueue &queue)
// {
//     return queue.front == -1;
// }

// bool isFull(CircularQueue &queue)
// {
//     return (queue.front == 0 && queue.rear == MAX_SIZE - 1) || (queue.front == queue.rear + 1);
// }

// void enqueue(CircularQueue &queue, int item)
// {
//     if (isFull(queue))
//     {
//         cout << "Queue is full. Cannot enqueue." << endl;
//         return;
//     }

//     if (isEmpty(queue))
//     {
//         queue.front = 0;
//         queue.rear = 0;
//     }
//     else
//     {
//         queue.rear = (queue.rear + 1) % MAX_SIZE;
//     }

//     queue.arr[queue.rear] = item;
//     cout << "Enqueued: " << item << endl;
// }

// void dequeue(CircularQueue &queue)
// {
//     if (isEmpty(queue))
//     {
//         cout << "Queue is empty. Cannot dequeue." << endl;
//         return;
//     }

//     cout << "Dequeued: " << queue.arr[queue.front] << endl;

//     if (queue.front == queue.rear)
//     {
//         queue.front = -1;
//         queue.rear = -1;
//     }
//     else
//     {
//         queue.front = (queue.front + 1) % MAX_SIZE;
//     }
// }

// void display(CircularQueue &queue)
// {
//     if (isEmpty(queue))
//     {
//         cout << "Queue is empty." << endl;
//         return;
//     }

//     cout << "Circular Queue Elements: ";
//     int i = queue.front;
//     do
//     {
//         cout << queue.arr[i] << " ";
//         i = (i + 1) % MAX_SIZE;
//     } while (i != (queue.rear + 1) % MAX_SIZE);

//     cout << endl;
// }

// int main()
// {
//     CircularQueue cQueue = {-1, -1};

//     int choice;
//     do
//     {
//         cout << "\nMenu:\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             int item;
//             cout << "Enter the item to enqueue: ";
//             cin >> item;
//             enqueue(cQueue, item);
//             break;
//         case 2:
//             dequeue(cQueue);
//             break;
//         case 3:
//             display(cQueue);
//             break;
//         case 4:
//             cout << "Exiting the program.\n";
//             break;
//         default:
//             cout << "Invalid choice. Please enter a valid option.\n";
//         }
//     } while (choice != 4);

//     return 0;
// }

// /////////////////////////////////////////////////

#include <iostream>
using namespace std;
#define MAX_SIZE 5

class CircularQueue
{
private:
    int front, rear;
    int arr[MAX_SIZE];

public:
    CircularQueue()
    {
        front = rear = -1;
    }
    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }

    bool isFull()
    {
        return (front == (rear + 1) % MAX_SIZE);
    }

    void enqueue(int data)
    {
        if (isFull())
        {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % MAX_SIZE;
        }

        arr[rear] = data;
        cout << data << " enqueued to the queue." << endl;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        cout << arr[front] << " dequeued from the queue." << endl;

        if (front == rear)
        {
            // Last element is being dequeued, reset front and rear
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % MAX_SIZE;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements: ";
        int i = front;
        do
        {
            cout << arr[i] << " ";
            i = (i + 1) % MAX_SIZE;
        } while (i != (rear + 1) % MAX_SIZE);
        cout << endl;
    }
};

int main()
{
    CircularQueue queue;

    int choice, data;

    do
    {
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data to enqueue: ";
            cin >> data;
            queue.enqueue(data);
            break;

        case 2:
            queue.dequeue();
            break;

        case 3:
            queue.display();
            break;

        case 4:
            cout << "Exiting the program." << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
