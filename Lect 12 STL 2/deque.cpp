#include <bits/stdc++.h>

using namespace std;

int main()
{

    deque<int> dq = {1, 2, 3, 4};

    for (int x : dq)
    {
        cout << x << " ";
    }
    cout << endl;

    // insert
    // dq.push_back(5);
    // dq.push_front(0);

    // delete
    // dq.pop_back();
    // dq.pop_front();  
    cout << dq.front() << " " << dq.back() << endl;
    cout << dq.size() << endl;
    // dq.empty() // true if size == 0;
    dq.clear(); // remove all the element in deque
    for (int x : dq)
    {
        cout << x << " ";
    }
    cout << endl;
}