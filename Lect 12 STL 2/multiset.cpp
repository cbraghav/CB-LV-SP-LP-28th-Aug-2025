#include <bits/stdc++.h>

using namespace std;

int main()
{

    // multiset<int> ms = {11, 2, 33, 3, 3, 3, 3, 4};
    multiset<int, greater<int>> ms = {11, 2, 33, 3, 3, 3, 3, 4};
    for (auto i : ms)
        cout << i << " ";
    cout << endl;

    // ms.insert(99);

    // for (auto i : ms)
    //     cout << i << " ";
    // cout << endl;

    // find
    auto it1 = ms.find(3);
    // if (it1 != ms.end())
    // {
    //     cout << *it1 << endl;
    // }

    // for (auto it = ms.begin(); it != ms.end(); it++)
    // {
    //     if (it == it1)
    //     {
    //         cout << "ok ";
    //     }
    //     cout << *it << endl;
    // }

    // erase

    // ms.erase(it1); // delete 1 element at that pos
    ms.erase(3); // delte all elements with that value
    for (auto i : ms)
        cout << i << " ";
    cout << endl;
}