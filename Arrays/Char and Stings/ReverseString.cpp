#include "iostream"
using namespace std;

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

    return 0;
}