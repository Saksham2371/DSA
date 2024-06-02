#include "iostream"
using namespace std;
int reverse(int arr[], int n, int m)
{

    int start = m + 1;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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
    int m = 3;
    int k = 2;

    reverse(arr, 6, m);
    reverse(brr, 5, k);

    printArray(arr, 6);
    printArray(brr, 5);
}