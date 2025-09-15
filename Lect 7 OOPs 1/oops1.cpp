#include <bits/stdc++.h>
using namespace std;

class Animal
{
public: // access modifier
    string name;
    string color;
    int no_of_legs;

    string get_name()
    {
        return name;
    }

    string get_color()
    {
        return color;
    }
    void set_no_of_legs(int legs)
    {
        no_of_legs = legs;
    }
};

int main()
{

    // Animal dog;
    // dog.color = "brown";
    // dog.name = "tommy";
    // dog.no_of_legs = 4;
    // cout << dog.get_name() << endl;
    // cout << dog.name << endl;

    // Animal cat;
    // cat.color = "white";
    // cat.name = "oggy";
    // cat.no_of_legs = 4;
    // cout << cat.get_color() << endl;

    Animal *dog = new Animal();

    dog->color = "black";
    dog->name = "apple";

    cout << dog->get_name() << endl;

    // int a;            // static memory
    // int *b = new int; // dynamic memory
    // *b = 12;
    // a = 11;
    // cout << a << " " << *b << endl;
    // delete b;
}