#include "iostream"
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}
int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

int main()
{
    int arr[7] = {1, 2, 3, 3, 3, 3, 5};
    int key = 3;

    int Index = firstOcc(arr, 7, key);
    cout << "Element First Occurence: " << Index << endl;

    int Index1 = lastOcc(arr, 7, key);
    cout << "Element Last Occurence: " << Index1 << endl;

    cout << "Number of Occurences: " << Index1 - Index + 1 << endl;
}