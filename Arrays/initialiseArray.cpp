#include <iostream>
using namespace std;

int main()
{
    // declare
    int first[15];

    // accessing an array
    cout << first[14] << endl;
    cout << endl;
    // initialising an array
    int second[3] = {2, 7, 11};

    // accessing an array
    cout << second[2] << endl;
    cout << endl;

    // printing the array
    int arr[10];
    int n = 10; // size of the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;

    // printing the array with all locations 0
    int fourth[10] = {0};
    int j = 10; // size of the array
    for (int i = 0; i < j; i++)
    {
        fourth[i];
        cout << fourth[i] << endl;
    }
    cout << endl;

    // printing the array with all locations (1 or 5 or a value)
    int fifth[10];
    int p = 10; // size of the array
    for (int i = 0; i < p; i++)
    {
        fifth[i] = 5;
        cout << fifth[i] << endl;
    }
    cout << endl;
}