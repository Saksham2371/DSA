// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9

#include "iostream"
using namespace std;

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int value = i;
        for (int j = 1; j <= i; j++)
        {

            cout << value << " "; // i+j-1
            value++;
        }
        cout << endl;
    }
}