#include "iostream"
using namespace std;

bool LinearSearch(int arr[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size;
    cout << "Input The Size of Array you want -> ";
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " Element: ";
        cin >> arr[i];
    }

    int n;
    cout << "Enter The Element for search: ";
    cin >> n;

    bool found = LinearSearch(arr, n, size);

    if (found == 0)
    {
        cout << "Element Not Found" << endl;
    }
    else
    {
        cout << "Element Found" << endl;
    }
}