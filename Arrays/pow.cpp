#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double solve(double x, long n)
    {
        if (n < 0)
        {
            return solve(1 / x, -n);
        }
        if (n == 0)
        {
            return 1;
        }
        if (n % 2 == 0)
        {
            return solve(x * x, n / 2);
        }
        else
        {
            return x * solve(x * x, n / 2);
        }
    }
    double myPow(double x, int n)
    {
        double ans = solve(x, long(n));
        return ans;
    }
};

int main()
{
    int x = 2;  // number
    int n = 10; // power
    Solution s;
    cout << s.myPow(x, n) << endl;
    return 0;
}