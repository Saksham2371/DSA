#include "iostream"
#include "vector"
using namespace std;

int main()
{
    vector<int> a;

    vector<int> b(5, 1); // if we already know the size of th vector

    vector<int> last(b); // if we want to copy the array b in last

    cout << "Size-> " << a.size() << endl; // current number of elements present inside this vector

    cout << "Capacity-> " << a.capacity() << endl; // total memory allocated to it for elements

    a.push_back(1);
    cout << "Capacity-> " << a.capacity() << endl;

    a.push_back(2); // jagah khtam hui toh cpacity double hogayi elments store krne ki
    cout << "Capacity-> " << a.capacity() << endl;

    a.push_back(3);
    cout << "Capacity-> " << a.capacity() << endl;
    a.shrink_to_fit(); // using this we reduced capacity to size of elements present.
    cout << "Capacity after using shrink_to_fit-> " << a.capacity() << endl;
    cout << "Size-> " << a.size() << endl;

    cout << "Element At 1st Index-> " << a.at(1) << endl;

    cout << "First Element-> " << a.front() << endl;
    cout << "Last Element-> " << a.back() << endl;

    cout << "Before Pop" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    a.pop_back();

    cout << "After Pop" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before Push" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    a.push_back(5);

    cout << "After Push" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size Before Clearing -> " << a.size() << endl;

    a.clear();
    cout << "Clearing Array... ";
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Capacity-> " << a.capacity() << endl;
    cout << "Size-> " << a.size() << endl;

    cout << "Print b" << endl;
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;
}
