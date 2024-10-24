#include <iostream>
#include <string>
#include <climits>

using namespace std;

int atoof(string s)
{
    if (s.length() == 0)
    {
        return 0;
    }

    int i = 0;
    while (i < s.size() && s[i] == ' ')
    {
        i++;
    }
    s = s.substr(i);

    int sign = +1;
    long ans = 0;
    if (s[0] == '-')
    {
        sign = -1;
    }

    int Max = INT_MAX;
    int Min = INT_MIN;

    // i = (s[0] == '+' || s[0] == '-') ? 1 : 0;
    if (s[0] == '+')
    {
        i = 1;
    }
    else if (s[0] == '-')
    {
        i = 0;
    }

    while (i < s.length())
    {
        if (s[0] == ' ' || !isdigit(s[i]))
        {
            break;
        }
    }
    ans = ans * 10 + s[i] - '0';
    if(sign == '-1' && )
}

int main()
{
    string str = "  -4265abc";
    cout << atoof(str) << endl;
    return 0;
}