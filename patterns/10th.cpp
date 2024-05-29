// A B C D
// A B C D
// A B C D
// A B C D

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
            char ch = char('A' + j - 1);
            cout << ch << " ";
        }
        cout << endl;
    }
}