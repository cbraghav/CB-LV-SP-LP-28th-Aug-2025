#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{

    array<int, 5> marks1;
    array<int, 5> marks2 = {4, 5, 1, 3, 2};

    // at - > works to access element at a particular indext
    // cout << marks2.at(0) << endl;
    // cout<< marks1[0]

    // get -> it is used to access values
    // cout << get<2>(marks2) << endl;

    // cout << marks2[3] << endl;

    // front -> first element
    // cout << marks2.front() << endl;
    // cout << marks2.back() << endl;
    // sort(marks2.begin(), marks2.end());

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << marks2[i] << " ";
    // }

    // cout << marks2.begin() << " " << &marks2[0] << endl;
    // cout << *marks2.begin() << endl;

    // cout << marks2.end() << " " << &marks2[5] << endl;

    // for (int i = 0; i < 5; i++)
    // { // i >=0  && i < n
    //     cout << &marks2[i] << " ";
    // }

    // for (auto it = marks2.begin(); it < marks2.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // *m.begin() <<" " << *m.begin() + 1
}
