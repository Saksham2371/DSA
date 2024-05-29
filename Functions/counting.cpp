#include "iostream"
using namespace std;
void Counting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i <<" ";
    }
    // return;     //returning the flow only
};

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    Counting(n);
    return 0;
}
