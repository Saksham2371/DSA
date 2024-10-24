#include <iostream>
#include <string>
#include <climits>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int Integerconverted(string &str)
{
    long long int res = 0;
    int i = 0;

    while (str[i] == ' ')
    {
        i++;
    }
    int sign = 0;

    if (str[sign] == '-')
    {
        sign = 1;
        i++;
    }
    else if (str[sign] == '+')
    {
        sign = 0;
        i++;
    }

    while (str[i] == '0')
    {
        i++;
    }

    while (str[i] > '0' && str[i] <= '9')
    {
        if (res > INT_MAX)
        {
            if (sign)
            {
                return INT_MIN;
            }
            return INT16_MAX;
        }
        res = res * 10 + str[i] - '0';
        i++;
    }
    
}

int main()
{
    string str = "4623";
    cout << Integerconverted(str) << endl;
    return 0;
}