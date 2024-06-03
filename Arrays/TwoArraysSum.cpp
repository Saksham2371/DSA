#include <bits/stdc++.h>
#include <array>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0;
    // int e = (sizeof(v) / sizeof(int)) - 1;
    int e = v.size() - 1;

    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findsum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    // reverse(ans.begin(), ans.end());
    // return ans;
    return reverse(ans);
}

int main()
{
    vector<int> a = {2, 3, 4, 6};
    int n = a.size();
    vector<int> b = {6, 7};
    int m = b.size();

    vector<int> sum = findsum(a, n, b, m);

    for (int i : sum)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}