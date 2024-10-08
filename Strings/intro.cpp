#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    cout << "Enter The string: ";
    cin >> str; // 1 way to declare a string
    cout << "The entered str is: " << str << endl;

    // declaring the string with a particular character of given length
    string str1(5, 'a'); // it gives the output 5 times a
    cout << str1 << endl;

    // taking string input with spaces
    string str2;
    cout << "Enter The 2nd string: ";
    getline(cin, str2);
    cout << "Str2 is: " << str2 << endl;
}