#include "iostream"
#include "vector"
#include "string"
#include "algorithm"
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
    vector<string> str = {"geeksforgeeks", "geeks", "geezer", "gee"};
    cout << "Longest Prefix is: " << LongestCommonPrefix(str) << endl;
    return 0;
}