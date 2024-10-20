#include "iostream"
#include "vector"
#include "string"
#include "climits"
using namespace std;

int shortestdistance(vector<string> &s, string w1, string w2)
{
    int d1 = -1;
    int d2 = -1;

    int ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == w1)
        {
            d1 = i;
        }
        if (s[i] == w2)
        {
            d2 = i;
        }
        if (d1 != -1 && d2 != -1)
        {
            ans = abs(d1 - d2);
        }
    }
    return ans;
}

int main()
{
    vector<string> s = {"the", "animal", "fox", "quack", "duck"};
    string word1 = "the";
    string word2 = "the";
    cout << shortestdistance(s, word1, word2) << endl;
    return 0;
}