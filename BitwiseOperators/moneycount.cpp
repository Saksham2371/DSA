#include "iostream"
using namespace std;

int main()
{
    int amount; 
    cout << "Enter The amount: ";
    cin >> amount;
    int rs500 = 0, rs100 = 0, rs50 = 0, rs20 = 0, rs10 = 0, rs1 = 0;

    switch (1)
    {
    case 1:
        rs500 = amount / 500;
        amount = amount % 500;
        cout << "500 Rs notes required are -> " << rs500 << endl;
        // break
    case 2:
        rs100 = amount / 100;
        amount = amount % 100;
        cout << "100 Rs notes required are -> " << rs100 << endl;
        // break;
    case 3:
        rs50 = amount / 50;
        amount = amount % 50;
        cout << "50 Rs notes required are -> " << rs50 << endl;
        // break;
    case 4:
        rs20 = amount / 20;
        amount = amount % 20;
        cout << "20 Rs notes required are -> " << rs20 << endl;
        // break;
    case 5:
        rs10 = amount / 10;
        amount = amount % 10;
        cout << "10 Rs notes required are -> " << rs10 << endl;
        // break;
    case 6:
        rs1 = amount / 1;
        amount = amount % 1;
        cout << "1 Rs notes required are -> " << rs1 << endl;
        break;
    default:
        cout << "Invalid Entry!!" << endl;
    }
}