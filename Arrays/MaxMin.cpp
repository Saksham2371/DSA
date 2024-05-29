#include "iostream"
using namespace std;

// int getMax(int arr[], int n)
// {

//     int Max = INT16_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > Max)
//         {
//             Max = arr[i];
//         }
//     }
//     return Max;
// }

// int getMin(int arr[], int n)
// {

//     int Min = INT16_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < Min)
//         {
//             Min = arr[i];
//         }
//     }
//     return Min;
// }

int getMaxMin(int arr[], int n)
{
    int Max = INT16_MIN;
    int Min = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        //     if (arr[i] > Max)
        //     {
        //         Max = arr[i];
        //     }
        //     else if (arr[i] < Min)
        //     {
        //         Min = arr[i];
        //     }

        Max = max(Max, arr[i]);
        Min = min(Min, arr[i]);
    }
    cout << "Max Element is: " << Max << endl;
    cout << "Min Element is: " << Min << endl;
}

int main()
{
    int size;
    cout << "Input The Size of Array you want -> ";
    cin >> size;

    int arr[100];
    // int Max = 0;
    // int Min = 0;

    // taking input of Array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " Element: ";
        cin >> arr[i];
    }

    // cout << "Max Element is: " << getMax(arr, size) << endl;
    // cout << "Max Element is: " << getMin(arr, size) << endl;
    getMaxMin(arr, size);

    return 0;
}