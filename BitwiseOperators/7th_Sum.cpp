// Subtract the Product and Sum of Digits of an Integer
#include "iostream"
using namespace std;

int main()
{
    int n;
    cout << "Enter a Three digit number: ";
    cin >> n;

    int sum = 0;
    int product = 1;
    while (n != 0)
    {

        int digit = n % 10;
        sum += digit;
        product *= digit;

        n = n / 10;
    }

    int result = product - sum;
    cout << result << endl;
}