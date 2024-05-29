#include "iostream"
using namespace std;

bool isEven()
{
    // Even -> 1
    // Odd  -> 0
    int n;
    cout << "Enter The Number: ";
    cin >> n;
    if (n % 2 == 0) // Even Case
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    if (isEven())
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }
}