#include "iostream"
using namespace std;

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // print numbers
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }

        // print stars
        for (int s = 1; s <= 2 * (i - 1); s++)
        {
            cout << "*";
        }

        // print reverse numbers
        for (int k = n - i + 1; k >= 1; k--)
        {
            cout << k;
        }
        cout << endl;
    }
    return 0;
}