#include "iostream"
#include "stack" //Last in First Out
using namespace std;

int main()
{
    stack<string> a;

    a.push("Saksham");
    a.push("Sahani");
    a.push("Harsh");
    a.push("Sahani");

    cout << "Top Element-> " << a.top() << endl;

    a.pop();
    cout << "Top Element After pop-> " << a.top() << endl;

    cout << "Size of Stack-> " << a.size() << endl;

    cout << "Empty or Not? " << a.empty() << endl;
}