#include <bits/stdc++.h>
using namespace std;

// Structure for an item which stores
// weight & corresponding value of Item
struct Item
{
    int value, weight;
    // Constructor
    Item(int value, int weight)
        : value(value), weight(weight)
    {
    }
};

// Comparison function to sort Item
// according to val/weight ratio
bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

// Main greedy function to solve problem
double fractionalKnapsack(struct Item arr[],
                          int N, int size)
{
    // Sort Item on basis of ratio
    sort(arr, arr + size, cmp);
    // Current weight in knapsack
    int curWeight = 0;
    // Result (value in Knapsack)
    double finalvalue = 0.0;
    // Looping through all Items
    for (int i = 0; i < size; i++)
    {

        // If adding Item won't overflow,
        // add it completely
        if (curWeight + arr[i].weight <= N)
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }

        // If we can't add current Item,
        // add fractional part of it
        else
        {
            int remain = N - curWeight;
            finalvalue += arr[i].value * ((double)remain / arr[i].weight);
            break;
        }
    }
    // Returning final value
    return finalvalue;
}

// Driver Code
int main()
{
    // Weight of knapsack
    int N = 60;
    // Given weights and values as a pairs
    Item arr[] = {{100, 10},
                  {280, 40},
                  {120, 20},
                  {120, 24}};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Function Call
    cout << "Maximum profit earned = "
         << fractionalKnapsack(arr, N, size);
    return 0;
}

/*
int main()
{
    // Weight of knapsack
    int N;
    cout << "Enter the weight of the knapsack: ";
    cin >> N;

    // Input the number of items
    int numItems;
    cout << "Enter the number of items: ";
    cin >> numItems;

    // Given weights and values as pairs
    Item *arr = new Item[numItems];
    cout << "Enter the value and weight of each item:\n";
    for (int i = 0; i < numItems; i++)
    {
        int value, weight;
        cin >> value >> weight;
        arr[i] = Item(value, weight);
    }

    // Function Call
    cout << "Maximum profit earned = " << fractionalKnapsack(arr, N, numItems);

    delete[] arr; // Freeing the allocated memory
    return 0;
}
*/