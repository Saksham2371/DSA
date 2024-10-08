#include <iostream>
#include <algorithm>
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
    cout << a2.compare(a1) << endl; // s2 is big which is why 23 is as output

    // Empty Function
    string b = "abc";
    b.clear();
    if (b.empty())
    {
        cout << "B is Empty" << endl;
    }

    // Erase Function
    string c = "SakshamSahani";

    // find func
    cout << c.find("sham") << endl; // returns 1st index of substring

    c.erase(3, 4); //(index fromm which earse is started, how much the characters you want to erase)
    cout << c << endl;

    // insert func
    c.insert(3, "sham");
    cout << c << endl;

    // length fun
    cout << c.length() << endl;
    // example in iteration
    for (int i = 0; i < c.length(); i++)
    {
        cout << c[i] << endl;
    }

    // to get substring from any string
    cout << c.substr(0, 7) << endl;

    // conveting numeric string into numbers
    string d = "786";
    int e = stoi(d);
    cout << e << endl;
    cout << e + 3 << endl;

    // converting integer to string
    int d1 = 786;
    cout << to_string(d1) + "3" << endl; // append hua

    // inbuilt sort func for sorting the charaters of the string
    string f = "sncinisncowsndisncionc";
    sort(f.begin(), f.end());
    cout << f << endl;

    return 0;
}