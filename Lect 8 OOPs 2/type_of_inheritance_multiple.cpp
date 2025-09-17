#include <bits/stdc++.h>

using namespace std;

// parent 1
class A
{
public:
    A()
    {
        cout << "class A is created" << endl;
    }

    int a = 50;
    int z = 500;
    int x = 50;
};

// parent 2
class B
{
public:
    B()
    {
        cout << "class B is created " << endl;
    }
    int b = 100;
    int x = 100;
};

// child class

class C : public A, public B
{
public:
    C()
    {
        cout << "class C is created" << endl;
    }
    int c = 200;
    int z = 1000;
};

int main()
{
    C cc;

    cout << cc.a << endl;
    cout << cc.b << endl;
    cout << cc.c << endl;
    cout << cc.z << endl;
    // cout << cc.x << endl; // this is ambigous, therefore use one of the below two
    cout << cc.A::x << endl;
    cout << cc.B::x << endl;
}