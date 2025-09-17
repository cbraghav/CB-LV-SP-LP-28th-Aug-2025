#include <bits/stdc++.h>
using namespace std;

class parent
{

public:
    string a_public;

protected:
    string a_protected;

private:
    string a_private;
};

class child_a : public parent
{
public:
    string get_a_protected()
    {
        return a_protected;
    }
    string get_a_private()
    {
        return a_private;
    }
};

class child_b : protected parent
{
public:
    string get_a_public()
    {
        return a_public;
    }
    string get_a_protected()
    {
        return a_protected;
    }
    string get_a_private()
    {
        return a_private; // not accessible
    }
};

class child_c : private parent
{
public:
    string get_a_public()
    {
        return a_public;
    }
    string get_a_protected()
    {
        return a_protected;
    }
    string get_a_private()
    {
        return a_private; // not accessible
    }
};

class child_of_c : public child_c
{
};
int main()
{

    parent p1;
    cout << p1.a_public << endl;
    // cout << p1.a_protected << endl;
    // cout << p1.a_private << endl;

    // child_a c1;
    // cout << c1.a_public << endl;
    // // cout << c1.a_protected << endl; // inaccessible
    // // cout << c1.a_private << endl;   // inaccessible
    // cout << c1.get_a_protected() << endl;
    // cout << c1.get_a_private() << endl;

    // child_b c2;
    // // cout << c2.a_public << endl; // inaccsible
    // // cout << c1.a_protected << endl; // inaccessible
    // // cout << c1.a_private << endl;   // inaccessible
    // cout << c2.get_a_public() << endl;
    // cout << c2.get_a_protected() << endl;
    // cout << c2.get_a_private() << endl;

    // child_of_c cc1;
    // cout << cc1.a_public << endl;
    // cout << cc1.get_a_private() << endl;
}