#include <bits/stdc++.h>

using namespace std;

// pass by value
// void f(int a, int b)
// {

//     a = 100;
//     b = 200;
// }

// pass by ref
// void f(int &a, int &b)
// {
//     a = 100;
//     b = 200;
// }

// pass by pointer
// void f(int *a, int *b)
// {
//     *a = 100;
//     *b = 300;
// }

// void f(int *&a, int *&b)
// {
//     int *t = a;
//     a = b;
//     b = t;
// }

int *fun()
{
    int x = 100;
    return &x;
}

int main()
{

    int *p = fun(); // int *p = &x
    cout << *p << endl;

    // double b = 1.2;
    // cout << a << " " << b << endl;
    // cout << "add of b is : " << &b << endl;

    // int a = 5; // a is a variable of type integer
    // cout << a << endl;
    // cout << "add of a is : " << &a << endl;

    // int *p = &a;
    // cout << "pointer p is : " << p << endl;

    // cout << "value at addr store at p " << *p << endl;
    // cout << "addr of pointer p is " << &p << endl;

    // // & -> is used to print addr of a variable
    // // * -> is used to print value of variable stored at that addr

    // cout << " guess the output of " << *(&p) << endl;

    // int a = 5;
    // int *p = &a;

    // cout << a << " " << *p << endl;
    // a = 10;

    // cout << a << " " << *p << endl;

    // int b = 9;
    // p = &b;
    // cout << a << " " << b << " " << *p << endl;
    // cout << &a << " " << &b << " " << p << endl;

    // *p = 99;

    // cout << a << " " << b << " " << *p << endl;
    // cout << &a << " " << &b << " " << p << endl;
    // int x = 10, y = 20;
    // int *a = &x, *b = &y;
    // int c = 99;
    // cout << *a << " " << *b << endl;
    // cout << a << " " << b << endl;
    // f(a, b);
    // cout << *a << " " << *b << endl;
    // cout << a << " " << b << endl;

    // int *p;        // p contains garbage value
    // int *q = NULL; // q contains ->
    // int *q  = 0;

    // void *p;
    // int a = 10;

    // p = &a;

    // cout << "add of a is " << &a << endl;
    // ;
    // cout << " value at p is " << p << endl;
}