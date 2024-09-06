#include "iostream"
using namespace std;

int main()
{
    int num = 5;
    int a = num;
    a++;
    cout << num << endl; // a got increment not num(it remains same)

    int *ptr = &num; // value at address of num is 5
    cout << "Before: " << num << endl;
    (*ptr)++; // num got increment
    cout << "After: " << num << endl;

    // copy a pointer
    int *qtr = ptr;
    cout << ptr << " - " << qtr << endl;
    cout << *ptr << " - " << *qtr << endl;

    // int Airthmethic
    int i = 3;
    int *t = &i;
    (*t)++;
    cout << *t << endl;

    // goes to next location
    cout << "before address t: " << t << endl;
    t = t + 1; // it goes to the next integer
    cout << "after address t: " << t << endl;

    return 0;
}