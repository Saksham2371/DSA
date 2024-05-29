#include "iostream"
using namespace std;

void SumArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter The " << i + 1 << " Element: ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of All Elements in Array is: " << sum << endl;
}

int main()
{

    int size;
    cout << "Input The Size of Array you want -> ";
    cin >> size;

    int arr[100];

    SumArray(arr, size);
}