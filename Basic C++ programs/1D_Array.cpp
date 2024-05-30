#include <iostream>
using namespace std;
int main()
{
    int arr[6];

    for (int i = 0; i <= 6; i++)
    {
        cout << "Enter the " << i << " element of the array: ";
        cin >> arr[i];
    }

    for (int i = 0; i <= 6; i++)
    {
        cout << i << " element of the array is: " << arr[i] << endl;
        ;
    }

    return 0;
}