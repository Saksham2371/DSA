#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
// #include "sstream"
using namespace std;

string LongestCommonPrefix(vector<string> &str)
{
    if (str.empty())
    {
        return "-1";
    }
    sort(str.begin(), str.end());

    string first = str.front();
    string last = str.back();
    int minlen = min(first.size(), last.size());

    int i = 0;
    while (i < minlen && first[i] == last[i])
    {
        i++;
    }
    if (i == 0)
    {
        return "-1";
    }
    return first.substr(0, i);
}

int main()
{
    vector<string> str = {"geeksforgeeks", "geeks", "geek", "geezer"};
    cout << LongestCommonPrefix(str) << endl;
    return 0;
}