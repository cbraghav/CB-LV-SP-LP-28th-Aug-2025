#include <bits/stdc++.h>
using namespace std;

class B
{
public:
    string name;
};

class A
{
public:
    int x;
    string y;
    char z;
    B m;
    class C
    {
    public:
        int Cx;
        string Cy;
    };
    C yc;
};

int a;
int func(){
    int x;
}

int main()
{
    A x;
    x.m.name = "Naman";
    x.yc.Cx = 1;
    cout << x.m.name;

    B ab;

    C ax;
}