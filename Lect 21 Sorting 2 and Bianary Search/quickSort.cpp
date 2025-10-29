#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int low, int hi)
{
    //
    int pivotElement = v[hi];
    // int pivotIndx

    int i = low;

    for (int j = low; j < hi; j++)
    {
        if (v[j] <= pivotElement)
        {
            swap(v[j], v[i]);
            i++;
        }
    }

    swap(v[i], v[hi]);
    return i;
}

void QuickSort(vector<int> &v, int low, int hi)
{
    if (low >= hi)
        return;

    int p = partition(v, low, hi);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // low  to p -1
    // p
    // p +1 to hi
    QuickSort(v, low, p - 1);
    QuickSort(v, p + 1, hi);
}
int main()
{

    vector<int> v = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = v.size();

    // MergeSort(v, 0, n - 1);
    QuickSort(v, 0, n - 1);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}