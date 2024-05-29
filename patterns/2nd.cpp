// 321
// 321
// 321
// 321

#include "iostream"
    using namespace std;

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}