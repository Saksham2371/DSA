#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str = "ajdcdniocniwiwc";

    // converting to uppercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    // converting to lowercase

    string str1 = "JNSDJINSNCJAAACA";

    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] += 32;
        }
    }
    cout << str1 << endl;

    // inbuilt func
    string str2 = "hbdsisbajksn";
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper); // (passing the string , to transfor in first two , noe telling it from where it should start capitalised the string , what to do)
    cout << str2 << endl;

    string str3 = "INSCOINWOIDSCS";
    transform(str3.begin(), str3.end(), str3.begin(), ::tolower);
    cout << str3 << endl;

    return 0;
}