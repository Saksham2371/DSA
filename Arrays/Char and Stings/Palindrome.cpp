#include "iostream"
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseString(char name[])
{
    int s = 0;
    int e = getLength(name) - 1;

    while (s <= e)
    {
        swap(name[s++], name[e--]);
    }
}

bool palindrome(char name[])
{
    int s = 0;
    int e = getLength(name) - 1;

    while (s <= e)
    {
        if (toLowerCase(name[s]) != toLowerCase(name[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    char name[20];
    cout << "Enter your name: "; // does not include space as input
    cin >> name;

    cout << "Your name is ";
    cout << name << endl;

    cout << "Length: " << getLength(name) << endl;
    // int n = getLength(name);

    reverseString(name);

    cout << "Your Reversed name is ";
    cout << name << endl;

    if (palindrome(name))
    {
        cout << "String is palindrome" << endl;
    }
    else
    {
        cout << "String is not palindrome" << endl;
    }

    return 0;
}