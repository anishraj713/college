#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 10, 40, 30};
    int key = 10;
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = size - 1;
    bool keyFound = false;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            cout << "Key found at index: " << mid;
            keyFound = true;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (!keyFound)
    {
        cout << "Key not found in the array.";
    }
}