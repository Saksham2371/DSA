#include "iostream"
using namespace std;
int main()
{
    int arr[10] = {2, 5, 6};

    cout << "Address of first memory block is " << arr << endl; // 1st method
    cout << "First Element is " << arr[0] << endl;
    cout << "Address of first memory block is " << &arr[0] << endl; // 2nd method

    cout << "First Element " << *arr << endl;
    cout << *arr + 1 << endl;                        // adding 1 to the value at first memory block
    cout << "Second Element " << *(arr + 1) << endl; // value at first+1 memory block

    // arr[i] = *(arr + i);   formula
    // Or
    // i[arr] = *(i + arr);

    int i = 2;
    cout << "Second Element " << *(i + arr) << endl; // 2nd method

    return 0;
}