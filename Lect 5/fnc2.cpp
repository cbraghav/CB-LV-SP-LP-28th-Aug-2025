#include <bits/stdc++.h>

using namespace std;
// pass by value
// void increment(int x)
// {
//     x++;
//     cout << x << endl;
//     return;
// }

// // pass by reference
// void increment(int &x)
// {
//     x++;
//     cout << x << endl;
//     return;
// }

int add(int a, int b = 0, int c = 0)
{
    return a + b;
}

// default values should be from right to left
int main()
{

    cout << add(1, 2, 3) << endl;
    cout << add(1, 2) << endl;
    cout << add(1) << endl;

    cout << add(3, 5);
    // cout << add(a = 3, c = 5); this is wrong
    // int a = 5;
    // increment(a);
    // cout << a << endl;
}