#include <bits/stdc++.h>

using namespace std;

// TC O(N)
// SC O(1)
void rotate1(vector<int> &v)
{

    int temp = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        v[i - 1] = v[i];
    }
    v[v.size() - 1] = temp;
}

// TC -> O(N*K) optimizze => O(N* (K%N)) <=> O(N^2)
int BF_rotate_byK()
{

    vector<int> v = {1, 2, 3, 4, 5};
    int k = 3;
    int n = v.size();
    k = k % n;
    for (int i = 0; i < k; i++)
    {
        rotate1(v);
    }

    for (auto x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}

// TC O(N)
// SC O(1)
void reverse1(vector<int> &v, int i, int j)
{
    while (i < j)
    {
        swap(v[i], v[j]);
        i++;
        j--;
    }
    return;
}

// TC O(2*N)
// SC O(1)
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();
    int k = 2;
    k = k % n;

    reverse1(v, 0, k - 1);
    reverse1(v, k, n - 1);
    reverse1(v, 0, n - 1);

    for (auto x : v)
        cout << x << " ";
    cout << endl;
}