#include "bits/stdc++.h"
using namespace std;

int fibo()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    int a = 0;
    int b = 1;

    int res = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        int nextnum = a + b;
        a = b;
        b = nextnum;
        res = nextnum;
    }
    cout << n << "th Term is: " << res;
}

int main()
{
    // int n;
    // cout << "Enter The Number: ";
    // cin >> n;

    fibo();
    return 0;
}