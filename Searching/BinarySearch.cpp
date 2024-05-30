#include "iostream"
using namespace std;

// It works only if the array is either in increasing order or decreasing order

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter The size of array you want-> ";
    cin >> size;

    int arr[size] = {5, 12, 28, 32, 46};
    for (int i = 0; i < size; i++)
    {
        cout << "Enter The " << i + 1 << " element: ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter The Element to search in array: ";
    cin >> key;

    int Index = binarySearch(arr, size, key);
    if (Index == -1)
    {
        cout << "Not Found Element" << endl;
    }
    else
    {
        cout << "Index of " << arr[Index] << " is " << Index << endl;
    }
    return 0;
}