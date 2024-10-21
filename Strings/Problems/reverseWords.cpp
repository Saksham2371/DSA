#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string reverseWords(string str)
{

    vector<string> words;
    stringstream ss(str);
    string word;

    while (getline(ss, word, ' '))
    {
        if (!word.empty())
        {
            words.push_back(word);
        }
    }
    reverse(words.begin(), words.end());

    string result;

    for (int i = 0; i < words.size(); i++)
    {
        if (i > 0)
        {
            result += ' ';
        }
        result += words[i];
    }

    return result;
}

int main()
{
    string str = "geeks for geaks";
    cout << reverseWords(str) << endl;
    return 0;
}