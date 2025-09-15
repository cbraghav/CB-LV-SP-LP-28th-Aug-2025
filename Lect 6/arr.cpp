#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[15];
    // int arr[N] ;  N number of element
    //
    // access / use -> index ?   0 to N - 1
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 19;
    cout << arr[0] << endl;
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << *arr << endl;
    cout << *(arr + 2) << endl;
}