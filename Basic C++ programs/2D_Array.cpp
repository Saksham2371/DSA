#include <iostream>
using namespace std;
int main()
{
    int arr2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "The Value at " << i << ", " << j << " is: " << arr2D[i][j] << endl;
        }
    }

    return 0;
}