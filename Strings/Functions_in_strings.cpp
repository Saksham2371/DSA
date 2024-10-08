#include <iostream>
#include <string>
using namespace std;

int main()
{
    // appending 2 strings
    string s1 = "fam";
    string s2 = "ily";
    // s1.append(s2);   append func
    // cout << s1 << endl;
    cout << s1 + s2 << endl; // just when we dont want to change strings

    // to access a particular character from th e string
    cout << s1[2] << endl;

    // comparing strings
    string a1 = "abc";
    string a2 = "xyz";
    cout << s2.compare(s1) << endl; // s2 is big which is why 23 is as output

    return 0;
}