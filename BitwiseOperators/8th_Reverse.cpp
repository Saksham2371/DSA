#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    int ans = 0;

    while (n != 0)
    {
        int digit = n % 10;

        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) // to check the size of the number is between the bit range
        {
            cout << 0;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << ans;
}