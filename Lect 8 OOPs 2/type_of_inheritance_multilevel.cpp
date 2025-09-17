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
};

class C : public B
{
public:
    C()
    {
        cout << "C is created" << endl;
    }
    int c = 200;
    // int x = 3;
};

int main()
{
    int a;
    C cc;
    cout << cc.a << endl;
    cout << cc.b << endl;
    cout << cc.x << endl;
}