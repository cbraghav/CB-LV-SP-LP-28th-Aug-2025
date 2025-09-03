#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int n = 5;
    // cout << n << endl;
    // n = 10;
    // cout << n << endl;

    // const int x = 10;
    // cout << x << endl;
    // x = 7;

    // double a = 10.43;

    // int x = a;
    // cout << x << endl;

    // double b = a;
    // cout << b << endl;

    // double c = (int)a + 2.2;   /// int(10.43) + 2.2  /// 10 + 2.2  // 12.2
    // // c = a + 2.2   ->   c = 10.43 + 2.2  -> 12.63
    // // c = int(a) + 2.2   ->    c = 10 + 2.2 -> 12.2
    // // c += 45.3243;
    // cout << c << endl;

    // const double xx = (a);
    // cout << xx << endl;

    // int a = 5;
    // int b = 2;

    // Arithemetic operators
    // double c = a + b;    // add
    // c = a - b;           // sub
    // c = a * b;           // mul
    // c = (double(a) / b); // div
    // // c = a % b;        // modulo
    // cout << c << endl;

    // cout << floor(2.5) << endl;
    // cout << ceil(2.5) << endl;

    // int a = 5;
    // int b = -6;

    // int c = -b;
    // cout << c << endl;

    // bool x = true;

    // cout << x << endl;

    // bool y = !x;
    // cout << y << endl;

    // int x = 10;

    // cout << x++ << endl;   //     cout<< x << endl ;     x = x + 1 ;   -> output => 10;
    // cout << ++x << endl; //  x = x +1 ; cout<< x << endl;   -> output => 11

    // cout << x-- << endl;
    // cout << --x << endl;
    // cout << x << endl;

    // int a = 10;
    // int b = 20;

    // cout << !(a == b) << endl;

    // cout << (a >= 5 && b >= 3) << endl;

    // cout << sizeof(a) << endl;

    // int age;
    // cin >> age;
    // string name;
    // // cin >> name;
    // if (age >= 18)
    // {
    //     cout << "person can drive the car";
    // }

    // cout << "test test ";

    // if (age >= 18)
    // {
    //     cout << "person can drive the car";
    // }
    // else
    // {
    //     cout << "person can not drive the car";
    // }

    // ;
    // if (age >= 18 && name =="raghav")
    // {
    //     cout << "person can drive the car";
    // }

    // if (age < 18)
    // {
    //     cout << "person can not drive the car ";
    // }

    ///

    ///

    int age;
    cin >> age;
    char gender;
    cin >> gender;

    if (age >= 18)
    {
        cout << "can drive ";
        if (gender == 'M')
        {
            cout << "bike";
        }
        else
        {
            cout << "car";
        }
    }
    else
    {
        cout << "can not drive";
    }
}