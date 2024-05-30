#include "iostream"
#include "queue" //First In First Out
using namespace std;

int main()
{
    queue<string> q;

    q.push("Saksham");
    q.push("Sahani");
    q.push("Harsh");
    q.push("Sahani");

    cout << "Size of Queue after Pop-> " << q.size() << endl;

    cout << "First Element-> " << q.front() << endl;
    q.pop();
    cout << "First Element After Pop-> " << q.front() << endl;

    cout << "Size of Queue after Pop-> " << q.size() << endl;
}