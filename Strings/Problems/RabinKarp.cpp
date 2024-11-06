#include <bits/stdc++.h>
using namespace std;
int rabinKarp(string s1, string s2)
{
    if (s1 == s2)
    {
        return 1;
    }

    int repeat = 1;
    string temp = s1;

    while (temp.size() < s2.size())
    {
    }
}
int main()
{
    string s1 = "na";
    string s2 = "apna colledgena";
    cout << "1st String occured" << rabinKarp(s1, s2) << " times" << endl;
    return 0;
}