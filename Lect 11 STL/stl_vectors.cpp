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

    // vector<int> v = {1, 2, 3, 4, 5};

    // cout << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;

    // // push_back(element)  // insert element at the end ->
    // v.push_back(7); // {1, 2, 3, 4, 5} ->  {1, 2, 3, 4, 5, 7};
    // v.push_back(8);
    // cout << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;

    // // insert(position , element) // insert element at a pos  / pos is iterator
    // v.insert(v.begin() + 3, 99);
    // cout << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;

    // v[2] = 54;

    // pop_back // delte last elemnt
    // v.pop_back();
    // v.pop_back(); // O(1)
    // v.pop_back(); // O(1)
    // v.pop_back(); // O(1)

    // cout << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;
    // v.insert(v.begin(), -99);

    // erase(position) // O(N)
    // v.erase(v.begin() + 1);
    // v.erase(v.end() - 2);
    // cout << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;

    // .size() - > size
    // empty() - > true  if size 0 else false
    // if (v.empty()) // if(v.size() == 0)
    // {
    //     cout << "vector is empty";
    // }
    // else
    // {
    //     cout << "vector has elements";
    // }

    // vector<int> v = {1, 2, 3, 4, 5};

    // // cout << v.size() << endl;
    // // for (int i = 0; i < v.size(); i++)
    // //     cout << v[i] << " ";
    // // cout << endl;

    // cout << *v.begin() << " " << v.front() << endl;
    // cout << *v.rbegin() << " " << v.back() << endl;

    // for (auto it = v.begin(); it < v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // int arr[5]  <->  vector<int> v(5)

    // int arr[5][4]   <-> ?

    // 2d vector

    vector<vector<int>> v(3, vector<int>(5));
    //  {
    //     {1, 2, 3, 4, 5},          // v[0]
    //     {11, 12, 13, 14, 15, 16}, // v[1]
    //     {21, 22, 23},
    // };

    // cout << v.size() << endl;
    // cout << v[0].size() << endl;
    // cout << v[1].size() << endl;
    // cout << v[2].size() << endl;

    vector<int> a = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    sort(a.begin() + 2, a.end() - 2);
    // sort( x , y)  => x inluced ,  y not included
    for (auto i : a)
        cout << i << " ";
}