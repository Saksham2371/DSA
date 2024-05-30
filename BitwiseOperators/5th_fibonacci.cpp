#include "iostream"
using namespace std;

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";

    for (int i = 0; i <= n; i++)
    {
        int nxtno = a + b;
        cout << nxtno << " ";
        a = b;
        b = nxtno;
    }
}