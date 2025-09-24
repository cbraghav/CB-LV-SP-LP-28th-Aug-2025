#include <bits/stdc++.h>

using namespace std;

int main()
{
    // vector<int> b;
    // // .size() returns size of vector
    // // cout << b.size() << endl;
    // vector<int> v(5); // int arr[5];
    // for (int i = 0; i < 5; i++)
    //     cout << v[i] << " ";
    // cout << endl;
    // vector<int> vv = {1, 2, 3, 4, 5};
    // vector<int> vvv(5, 2);
    // for (int i = 0; i < 5; i++)
    //     cout << vvv[i] << " ";
    // cout << endl;
    // // cout << vv.size() << endl;

    // cout << vv.at(2);
    // cout << vv[7];

    vector<int> v = {1, 2, 3, 4, 5};

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // push_back(element)  // insert element at the end ->
    v.push_back(7); // {1, 2, 3, 4, 5} ->  {1, 2, 3, 4, 5, 7};
    v.push_back(8);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // insert -> // insert element at a pos
    v.insert(v.begin() + 3, 99);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}