// A B C
// B C D
// C D E

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

            cout << char('A' + i + j - 2) << " ";
        }
        cout << endl;
    }
}