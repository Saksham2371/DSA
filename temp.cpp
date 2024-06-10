#include "iostream"
#include "vector"
using namespace std;

void printArray(vector<int> arr)
{
    for (int i : arr)
    {
        cout << i << endl;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    printArray(arr);
    return 0;
}