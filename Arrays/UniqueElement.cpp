#include "iostream"
using namespace std;

int Unique(int arr[], int n)
{
    int unqEle = 0;
    for (int i = 0; i < n; i++)
    {
        // used XOR operator for comparing
        // 0 XOR 0 = 0
        // 1 XOR 0 = 1
        // 0 XOR 1 = 1
        // 1 XOR 1 = 0
        unqEle ^= arr[i];
    }
    return unqEle;
}

void printarr(int arr[], int n)
{
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 5, 5, 7, 7};

    printarr(arr, 5);

    cout << "Unique element present in the array is " << Unique(arr, 5) << endl;
}