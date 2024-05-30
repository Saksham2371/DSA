#include "iostream"
using namespace std;
// 1 -> Prime No.
// 0 -> Not a Prime No.

void Prime() 
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    bool isprime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 0)
    {
        cout << n << " is not Prime" << endl;
    }
    else
    {
        cout << n << " is Prime" << endl;
    }
};

int main()
{
    // int n;
    // cout << "Enter The Number: ";
    // cin >> n;

    Prime();
    return 0;
}