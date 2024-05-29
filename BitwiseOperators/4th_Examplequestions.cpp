// 1st

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b = 1;
//     a = 10;

//     if (++a)
//         cout << b;
//     else
//         cout << ++b;

//     return 0;
// }

// 2nd

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 1;
//     int b = 2;

//     if (a-- > 0 || ++b > 2) // 2nd condition is not executed bcoz 1st hold true
//     {
//         cout << "Stage1 - Inside If ";
//     }
//     else
//     {
//         cout << "Stage2 - Inside else ";
//     }

//     cout << a << " " << b << endl;
//     return 0;
// }

// 3rd

// #include <iostream>
// using namespace std;
// int main()
// {
//     int number = 3;
//     cout << (25 * (++number));
// }

// 4th

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = a++; // updates after
//     int c = ++a;
//     cout << b << endl;
//     cout << c << endl;
// }
