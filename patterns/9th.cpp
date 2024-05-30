// A A A A
// B B B B
// C C C C
// D D D D

#include "iostream"
using namespace std;

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = char('A' + i - 1); // Type Casting
            cout << ch << " ";
        }
        cout << endl;
    }
}