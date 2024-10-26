#include <bits/stdc++.h>
using namespace std;

class palindrome
{
public:
    bool pali(string s)
    {
        int n = s.length();
    

        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j < n; j--)
            {
                if (s[i] == s[j])
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
};

int main()
{
    string str = "naman";
    palindrome p;
    if (p.pali(str))
        cout << "Palindrome" << endl;
    else
        cout << "Not" << endl;
    return 0;
}