#include <bits/stdc++.h>

using namespace std;

int main()
{

    unordered_set<int> us = {7, 3, 8, 1, 6, 7}; // no duplicate valus // no sorting
    for (auto i : us)
        cout << i << " ";
    cout << endl;

    us.insert(15);
    for (auto i : us)
        cout << i << " ";
    cout << endl;

    auto it = us.find(3);
    if (it != us.end())
        cout << *it << endl;

    us.erase(7);
    for (auto i : us)
        cout << i << " ";
    cout << endl;
}