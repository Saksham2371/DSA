#include "iostream"
using namespace std;

int main()
{
    int a;
    cout << "Enter First Number: ";
    cin >> a;
    // cout << endl;
    int b;
    cout << "Enter second Number: ";
    cin >> b;
    // cout << endl;
    char operation;
    cout << "Enter The Operation to perform: ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        cout << "Enter a valid operation." << endl;
    }
}