#include <bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Input The Size of Array you want-> ";
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> arr[i];
    }

    sortArray(arr, size);

    printArray(arr, size);
}