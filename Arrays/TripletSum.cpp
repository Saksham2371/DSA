#include <bits/stdc++.h>
using namespace std;

void TripleSum(int arr[], int size, int key)
{

    for (int i = 0; i < size - 2; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == key)
                {
                    cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                }
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter The Size Of Array you want -> ";
    cin >> size;

    // Taking array input
    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter The " << i + 1 << " element: ";
        cin >> arr[i];
    }

    // Sum of triplet need to find in array
    int key;
    cout << "Enter The Sum of Triplet: ";
    cin >> key;

    TripleSum(arr, size, key);
    return 0;
}