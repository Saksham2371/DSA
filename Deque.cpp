#include "iostream"
#include "deque" //dynamic
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_back();
    // cout << "After pop_back" << endl;
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    cout << "Element At 1st Index: " << d.at(1) << endl;

    cout << "First Element-> " << d.front() << endl;
    cout << "Last Element-> " << d.back() << endl;

    cout << "Empty or Not? -> " << d.empty() << endl;

    cout << "Before Erasing" << endl;
    cout << "Size-> " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); // begin and end indices to be given
    cout << "After Erasing" << endl;
    cout << "Size-> " << d.size() << endl;
}