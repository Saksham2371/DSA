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
    cout << str1;

    int a = str.length();
    cout << a;
}