#include <iostream>
using namespace std;

void swapAlternative(int arr[], int n)
{
    int start = 0;
    int end = 1;

    while (start < n && end < n)
    {
        swap(arr[start], arr[end]);
        start += 2;
        end += 2;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {64, -1, 0, 90, 26};

    swapAlternative(arr, 6);
    swapAlternative(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}
