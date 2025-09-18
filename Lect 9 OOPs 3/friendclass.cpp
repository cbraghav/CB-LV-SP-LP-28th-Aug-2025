#include <bits/stdc++.h>

using namespace std;

class Bike
{
private:
    int chasis_number;

protected:
    int engine_number;

public:
    int max_speed;
    Bike()
    {
        chasis_number = 10;
        engine_number = 20;
        max_speed = 120;
    }
    friend class Cycle;              // friend class
    friend void print_data(Bike &b); // friend fnc
};

class Cycle
{
public:
    void print_details(Bike &b)
    {
        cout << b.max_speed << endl;
        cout << b.engine_number << endl;
        cout << b.chasis_number << endl;
    }
};

void print_data(Bike &b)
{
    cout << b.max_speed << endl;
    cout << b.engine_number << endl;
    cout << b.chasis_number << endl;
}

int main()
{
    Bike b;
    Cycle c;

    c.print_details(b);
    print_data(b);
}