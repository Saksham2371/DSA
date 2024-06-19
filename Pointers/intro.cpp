#include "iostream"
using namespace std;

int main()
{
    // int num = 5;
    // cout << num << endl;
    // // addess of operator
    // cout << &num << endl;

    // int *ptr = &num;      // syntax to create pointer
    // cout << ptr << endl;  // this contains the address
    // cout << *ptr << endl; // this contains the value at address

    // double d = 4.2;
    // double *p2 = &d;

    // cout << p2 << endl; // this contains the address
    // cout << *p2 << endl;

    // // size of pointer

    // cout << "Size of integer: " << sizeof(num) << endl;
    // cout << "Size of pointer: " << sizeof(ptr) << endl;
    // cout << "Size of pointer: " << sizeof(p2) << endl;

    int num = 5;
    int *ptr = &num;

    cout << sizeof(ptr) << endl;

    return 0;
}