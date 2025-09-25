#include <bits/stdc++.h>
using namespace std;

class mycmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.first + a.second < b.first + b.second) // asc order based on sum
            return true;
        return false;
        // if (a.first > b.first) // first val in desc
        //                        // if (a.first < b.first) // first val in asc
        //     return true;
        // // if (a.first == b.first && a.second > b.second) // second val in desc
        // if (a.first == b.first && a.second < b.second) // secn val in asc
        //     return true;
        // return false;
    }
};
int main()
{

    // priority_queue<int> pq; // increasing order
    // priority_queue<int, vector<int>, greater<int>> pq; // decreasing order

    // insert

    // pq.push(10);
    // pq.push(11);
    // pq.push(5);
    // print the top element
    // cout << pq.size() << " " << pq.top() << endl;

    // // delte
    // // pq.pop();
    // // cout << pq.size() << " " << pq.top() << endl;

    // pq.empty() -> true if size == 0

    // priority_queue<int> temp(pq);
    // while (temp.size())
    // {
    //     cout << temp.top() << " ";
    //     temp.pop();
    // }

    // priority_queue<T , vector<T> , Comparator>
    priority_queue<pair<int, int>, vector<pair<int, int>>, mycmp> pq;

    pq.push({4, 5});
    pq.push({4, 3});
    pq.push({3, 8});
    pq.push({6, 1});

    priority_queue<pair<int, int>, vector<pair<int, int>>, mycmp> temp(pq);
    while (temp.size())
    {
        pair<int, int> t = temp.top();
        cout << temp.top().first << " " << temp.top().second << " " << temp.top().first + temp.top().second << endl;
        temp.pop();
    }
}
