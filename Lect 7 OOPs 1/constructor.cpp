#include <bits/stdc++.h>
using namespace std;

class Car
{

public:
    string name;
    string company_name;
    int model_year;
    string color;

    // Car(){
    //}
    // default constructor
    // private:
    Car()
    {
        company_name = "skoda";
        cout << "default cons. is called" << endl;
    }
    Car(int m_y, string n)
    {
        name = n;
        model_year = m_y;
        cout << "parameterized cons with 2 pm is called" << endl;
    }
    Car(string n, string company_name)
    {
        name = n;
        model_year = 2018;
        this->company_name = company_name;
        // c1->company_name;
        cout << "new cons is called with  2 pm " << endl;
    }
    Car(Car &obj1)
    {
        this->name = obj1.name;
        this->model_year = obj1.model_year;
        this->company_name = obj1.company_name;
    }
    ~Car()
    {
        cout << "destructor is called" << endl;
    }
};

int main()
{

    // int a;
    // Car c1(2018, "alto");
    Car c1("alto", "maruti");
    cout << c1.model_year << endl;
    cout << c1.company_name << endl;
    cout << c1.name << endl;

    // cout << this->name << endl;
    Car c2(c1);
    cout << c2.model_year << endl;
    cout << c2.company_name << endl;
    cout << c2.name << endl;
}