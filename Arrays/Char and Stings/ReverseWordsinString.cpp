#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    int lastSpace = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            reverse(s.begin() + lastSpace, s.begin() + i);
            lastSpace = i + 1;
        }
    }
    reverse(s.begin() + lastSpace, s.end());
    return s;
}

int main()
{
    string s = "Let's take LeetCode contest";
    cout << reverseWords(s) << endl;
    return 0;
}
