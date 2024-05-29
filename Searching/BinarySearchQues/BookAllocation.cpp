#include "iostream"
using namespace std;

bool possibleSoln(int arr[], int n, int m, int mid)
{
    int student = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            student++;
            if (student > m || arr[i] > mid)
            {
                return false;
            }
            else
            {
                pageSum += arr[i];
            }
        }
    }
    return true;
}
// arr-> no of pages
// n -> no of books
// m -> no of students
int allocateBooks(int arr[], int n, int m) //function to find minimum pages
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];  
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (possibleSoln(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[4] = {12, 34, 67, 90};
    int n = 4;
    int m = 2;
    // minimum number of pages
    // 1st student gets-> 12 + 34 + 67 = 113 (our ans)
    // 2nd student gets-> 90
    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}

// 1. Each student gets at least one book.
// 2. Each book should be allocated to a student.
// 3. Book allocation should be in a contiguous manner.
// You have to allocate the book to 'm' students such that the maximum number of pages assigned to a student is minimum.