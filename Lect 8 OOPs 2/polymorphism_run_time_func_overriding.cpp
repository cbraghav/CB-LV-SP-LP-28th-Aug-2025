#include <bits/stdc++.h>

using namespace std;

class A
{
public:
    int a = 100;
    A()
    {
        cout << "A is created" << endl;
    }
    int x = 1;
    void print_hello()
    {
        cout << "hi A " << endl;
    }
};

class B : public A
{
public:
    int b = 50;
    B()
    {
        cout << "B is created" << endl;
    }
    int x = 2;
    void print_hello()
    {
        cout << "hi b" << endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout << "C is created" << endl;
    }
    int c = 200;
    // void print_hello()
    // {
    //     cout << "hi" << endl;
    // }
    // int x = 3;
};

int main()
{
    int a;
    C cc;
    cout << cc.a << endl;
    cout << cc.b << endl;
    cout << cc.x << endl;
    cc.print_hello();
}