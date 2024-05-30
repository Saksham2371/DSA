// Peak Index in a Mountain Array
#include "iostream"
using namespace std;

int findPeak(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
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

    int arr[3] = {0, 1, 0};
    int brr[4] = {0, 2, 1, 0};

    int Index = findPeak(arr, 3);
    cout << "Peak Element is " << arr[Index] << " at Index " << Index << endl;

    int Index1 = findPeak(brr, 4);
    cout << "Peak Element is " << brr[Index1] << " at Index " << Index1 << endl;
}