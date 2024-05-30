//    *
//   **
//  ***
// ****

#include "iostream"
using namespace std;

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        // Prints Stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}