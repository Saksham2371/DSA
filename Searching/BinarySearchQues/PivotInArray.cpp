// Find Pivot Index

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

int main()
{
    int size = 5;
    int arr[size] = {3, 8, 10, 17, 1};

    int Index = getPivot(arr, 5);
    cout << "Pivot Element is " << arr[Index] << " at Index " << Index << endl;
}
