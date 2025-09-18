#include <bits/stdc++.h>

using namespace std;

void increment()
{
    static int counter = 0;
    counter++;
    cout << counter << " ";
}

class Animal
{

public:
    static int count_of_animal; // created when program is executed
    string name = "Cow";        // created when a object is created
    Animal()
    {
        count_of_animal++;
    }
    static void print_count_of_animal()
    {
        cout << count_of_animal << endl;
    }
};
int Animal::count_of_animal = 0;
int main()
{
    Animal a1;
    cout << Animal::count_of_animal << endl;
    Animal a2;
    cout << a1.name << endl;
    Animal::count_of_animal = 500;
    cout << a1.count_of_animal << endl;
    Animal::print_count_of_animal();

    // Animal a1;
    // cout << a1.count_of_animal << " ";
    // Animal a2;
    // cout << a2.count_of_animal << " ";

    // increment();
    // increment();
    // increment();
    // increment();
    // increment();
    // increment();
}