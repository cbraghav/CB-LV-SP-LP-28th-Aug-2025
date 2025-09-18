#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base class" << endl;
    }
};

class Child : public Base
{
public:
    void print()
    {
        cout << "Child Class" << endl;
    }
};

int main()
{
    // when you create a child class obj directly
    Child c1;
    c1.print();

    // when you refer a child class obj , using a pointer of the parent/base class , you can call the virtual fnc for that parent class

    Base *basePtr;

    Child c2;
    basePtr = &c2;
    basePtr->print();
    basePtr->Base::print();
    c2.Base::print(); // runtime poly
}