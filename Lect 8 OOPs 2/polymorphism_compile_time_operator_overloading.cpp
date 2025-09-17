#include <bits/stdc++.h>

using namespace std;

class ComplexNumber
{
public:
    int real;
    int imag;

    // normal fnc
    ComplexNumber plus(ComplexNumber c1)
    {
        ComplexNumber t;
        t.real = c1.real + this->real;
        t.imag = c1.imag + this->imag;
        return t;
    }
    // operator overlaoding
    ComplexNumber operator+(ComplexNumber c1)
    {
        ComplexNumber t;
        t.real = c1.real + this->real;
        t.imag = c1.imag + this->imag;
        return t;
    }
};

int main()
{

    ComplexNumber c1;
    c1.real = 5;
    c1.imag = 3;

    ComplexNumber c2;
    c2.real = 2;
    c2.imag = 5;

    ComplexNumber c3 = c1.plus(c2);
    ComplexNumber c4 = c1 + c2;
    ComplexNumber c5 = c1.operator+(c2);
    cout << c3.real << " + i" << c3.imag << endl;
    cout << c4.real << " + i" << c4.imag << endl;
    cout << c5.real << " + i" << c5.imag << endl;
}