#include <bits/stdc++.h>
using namespace std;

bool possibleSoln(int arr[], int n, int k, int mid)
{
    int cowCount = 1;
    int lastPos = arr[0];

    for (int i = 1; i < n; i++) // Start from the second element
    {
        if (arr[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[], int n, int k)
{
    sort(arr, arr + n); // Sort the array
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi; // Maximum possible distance
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (possibleSoln(arr, n, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n = 6;
    int arr[] = {0, 3, 4, 7, 10, 9};
    int k = 4; // Example value for the number of cows

    int result = aggressiveCows(arr, n, k);
    cout << "The largest minimum distance is: " << result << endl;

    return 0;
}
