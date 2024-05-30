// Square root using Binary Search
#include "iostream"
using namespace std;

int mySqrt(int x)
{
    int s = 0;
    int e = x;
    while (s <= e)
    {
        long long mid = s + (e - s) / 2;
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return e;
}

double morePrecision(int n, int precision, int tempSoln)
{
    double factor = 1;
    double ans = tempSoln;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    int tempSoln = mySqrt(n);
    cout << "Answer is " << morePrecision(n, 6, tempSoln);

    return 0;
}
