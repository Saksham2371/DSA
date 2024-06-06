#include <iostream>
using namespace std;

int main()
{
    char name[20];
    cout << "Enter your name: "; // does not include space as input
    cin >> name;

    cout << "Your name is ";
    cout << name << endl;

    cout << sizeof(name);

    return 0;
}