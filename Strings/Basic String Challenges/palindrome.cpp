#include "iostream"
#include "string"
#include "algorithm"
using namespace std;

class palindrome
{
public:
    bool pali(string str)
    {
        int start = str[0];
        int end = str[str.size() - 1];

        while (start < end)
        {
            if (str[start] != str[end])
                return false;
            else
            {
                return true;
            }
            start++;
            end--;
        }
    }
};

int main()
{

    string str = "naman";

    palindrome p;

    if (p.pali(str))
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "Not" << endl;
    }

    return 0;
}
