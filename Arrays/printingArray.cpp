#include "iostream"
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Printing Done" << endl;
    cout << endl;
}

int main()
{

    int first[10] = {0};
    printArray(first, 10);

    int arr[10] = {0};
    // Array_Size = SizeOf(arr)/SizeOf(int);
    for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        cout << arr[i] << endl;
    }
}