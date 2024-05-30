#include <iostream>
#include <array>
using namespace std;

int main()
{
    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4}; // static

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Element at 2nd Index-> " << a.at(2) << endl;

    cout << "Array is empty or not? " << a.empty() << endl;

    cout << "First Element-> " << a.front() << endl;
    cout << "Last Element-> " << a.back() << endl;
}