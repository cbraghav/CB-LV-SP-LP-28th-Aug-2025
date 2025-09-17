#include <bits/stdc++.h>
using namespace std;

class vehicle
{

public:
    string color;
    int max_speed;
    vehicle()
    {
        cout << "vehicle class is created" << endl;
    }
};

class car : public vehicle
{
public:
    int num_of_gears;
    int num_of_tyres;
    car()
    {
        cout << "car class is created" << endl;
    }
};

class cycle : public vehicle
{
public:
    int num_of_tyre;
    bool is_foldable;
};

int main()
{
    car car1;
    car1.color = "green";
    car1.max_speed = 150;
    car1.num_of_gears = 6;
    car1.num_of_tyres = 4;

    cout << car1.color << endl;
    cout << car1.max_speed << endl;
    cout << car1.num_of_gears << endl;
    cout << car1.num_of_tyres << endl;

    // cycle c1;
    // c1.color = "black";
    // c1.num_of_tyre = 2;
    // c1.max_speed = 5;
    // c1.is_foldable = false;

    // cout << c1.color << endl;
    // cout << c1.num_of_tyre << endl;
    // cout << c1.max_speed << endl;
    // cout << c1.is_foldable << endl;
}