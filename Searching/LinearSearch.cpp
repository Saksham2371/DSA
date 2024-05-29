#include "iostream"
using namespace std;

//without usinng function

int main()
{

    int size;
    cout << "Input The Size of Array you want -> ";
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " Element: ";
        cin >> arr[i];
    }

    int n;
    cout << "Enter The Element for search: ";
    cin >> n;

    bool found = 0;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == n)
        {
            found = 1;
        }
    }

    if (found == 0)
    {
        cout << "Element Not Found" << endl;
    }
    else
    {
        cout << "Element Found" << endl;
    }
    return 0;
}