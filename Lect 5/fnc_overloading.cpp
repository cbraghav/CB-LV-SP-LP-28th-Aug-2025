#include <bits/stdc++.h>

using namespace std;

// int add(int a, int b)
// {
//     cout << "this is good fnc" << endl;
//     return a + b;
// }
double add(double a, double b)
{
    return a + b;
}
int add(int x, int y, int z)
{
    cout << "this is bad fnc" << endl;
    return x + y + z;
}
// int add(int a, int b = 5)
// {
//     return a + b;
// }

int add(int a, int b)
{
    cout << "hello" << endl;
    return a + b;
}
char add(int x)
{
    cout << "hello" << endl;
    ;
    return 'c';
}

int main()
{

    // how to overload a func
    // 1. change the number of argument
    // 2. change the type of argument
    cout << add(6) << endl;
    ;
    // cout << add(8) << endl;
    cout << add(3, 5) << endl;
    cout << add(4, 5, 6) << endl;
    cout << add(1.5, 2.2) << endl;
}