#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "498723659";

    // sort(str.begin(), str.end());
    // cout << str << endl;
    // reverse(str.begin(), str.end());
    // cout << str << endl;

    // // OR
    sort(str.begin(), str.end(), greater<int>());
    cout << str << endl;

    return 0;
}