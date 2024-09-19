#include <iostream>
using namespace std;

int linearSearch(int n, int arr[], int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Size of Array ";
    cin >> n;

    cout << "Please Input the Array ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Please Provide Key ";
    cin >> key;

    int Answer = linearSearch(n, arr, key);

    if (Answer == -1)
    {
        cout << "Key Not Found";
    }
    else
    {
        cout << "Element is present at index " << Answer;
    }
}