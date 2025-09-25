#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{

    // set<int> s;
    // set<int> s = {1, 20, 3, 9, 9, 1, 56}; // stores in increasing order
    set<int, greater<int>> s = {1, 20, 3, 9, 9, 1, 56}; // store in decreasing order

    // insert
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);

    // traverse - > it provide iterators
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // delete ->

    // delete the element
    s.erase(3);
    s.erase(s.begin()); // iterator
    // for (int i : s)
    // {
    //     cout << i << " ";
    // }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // find ->
    // if the element is present -> iterator
    // if not -> st.end();

    auto it = s.find(999);
    if (it != s.end())
        cout << *it << endl;
    else
        cout << "element not found" << endl;

    // upper bound
    // lower bound
    // Binary Search
}