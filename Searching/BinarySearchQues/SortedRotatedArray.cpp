// Search in Rotated Sorted Array

#include "iostream"
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int target)
{
    int start = s;
    int end = e;

    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (target == arr[mid])
        {
            return mid;
        }
        if (target > arr[mid])
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

int findPosition(int arr[], int size, int target)
{

    int pivot = getPivot(arr, size);
    if (target >= arr[pivot] && target <= arr[size - 1])
    {
        return binarySearch(arr, pivot, size - 1, target);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, target);
    }
}

int main()
{
    int size = 5;
    int arr[size] = {3, 8, 10, 17, 1};
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int target;
    cout << "Enter Target element to find: ";
    cin >> target;

    int index = findPosition(arr, size, target);
    cout << "Target Element " << arr[index] << " Found at " << "index " << index << endl;
}
