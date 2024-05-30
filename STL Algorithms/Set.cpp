#include "iostream"
#include "set" //stores only unique values
using namespace std;

// element once initialised cannot be modified
// either initialise or delete.
// returns elements in the sorted order

// unordered set is faster than normal set
// elements are fetched randomly and not in a sorted way
int main()
{
    set<int> p;

    p.insert(5);
    p.insert(5);
    p.insert(5);
    p.insert(1);
    p.insert(6);
    p.insert(6);
    p.insert(0);
    p.insert(0);
    p.insert(0);

    for (int i : p)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = p.begin();
    it++;

    p.erase(it);

    for (int i : p)
    {
        cout << i << " ";
    }
    cout << endl;
    // present element or  not
    cout << "5 is present or not? " << p.count(5) << endl;
    cout << "-5 is present or not? " << p.count(-5) << endl;

    set<int>::iterator itr = p.find(5);
    for (auto it = itr; it != p.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}