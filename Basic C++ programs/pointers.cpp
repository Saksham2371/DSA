#include "iostream"
using namespace std;

int main()
{
    int a = 34;
    int *ptra; // pointer
    ptra = &a; // stores address of a

    cout << ptra << endl; // prints address of a
    cout << *ptra;        // prints the value at ptra address

    return 0;
}