#include "iostream"
#include "list"
using namespace std;

int main()
{
    list<int> l;

    list<int> m(5, 100);
    cout << "Printing Element of list m" << endl;
    for (int i : m)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "After Erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of List-> " << l.size() << endl;
    l.clear();
    cout << "After Clearing" << endl;
    cout << "Size of List-> " << l.size() << endl;
}