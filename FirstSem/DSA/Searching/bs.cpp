#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int first, int last, int x)
{
    while (first <= last)
    {
        int m = first + (last - first) / 2;
        if (arr[m] == x)
            return m;

        else if (arr[m] < x)
            first = m + 1;

        else
            last = m - 1;
    }
    return -1;
}

int main(void)
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

    int result = binarySearch(arr, 0, n - 1, key);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
