#include "iostream"
#include "vector"
using namespace std;

bool check(int nums[], int n)
{
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }
    if (nums[n - 1] > nums[0])
    {
        count++;
    }
    return count <= 1; 
}

int main()
{
    int arr[5] = {2, 1, 3, 4};

    if (check(arr, 4))

        cout << "Array is Sorted and Rotated" << endl;
    else
        cout << "Array is Not Sorted and Rotated" << endl;
}