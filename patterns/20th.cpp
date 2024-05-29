//    1
//   121
//  12321
// 1234321
#include "iostream"
using namespace std;

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        //print 1st triangle
        for (int space = n - i; space > 0; space--)
        {
            cout << " ";
        }
        // print 2nd triangle
        for (int j = 1; j <= i; j++)
        {

            cout << j;
        }
        // print 3rd triangle
        for (int d = i - 1; d >= 1; d--)
        {
            cout << d;
        }
        cout << endl;
    }
}