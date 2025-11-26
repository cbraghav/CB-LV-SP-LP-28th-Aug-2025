#include <bits/stdc++.h>
using namespace std;

class Q
{
    int *arr;
    int start, end;
    int cap = 100;

public:
    Q()
    {
        arr = new int[cap];
        start = -1;
        end = -1;
    }
    Q(int sz)
    {
        cap = sz;
        arr = new int[cap];
        start = -1;
        end = -1;
    }

    void push(int x)
    {
        if (end == cap - 1)
        {
            cout << "queue is full" << endl;
            return;
        }
        end++;
        arr[end] = x;
    }

    void pop()
    {
        if (start == end)
        {
            cout << "queue is empty" << endl;
            return;
        }
        start++;
    }

    int front()
    {
        if (start == end)
        {
            cout << "queue is empty";
            return INT_MIN;
        }
        return arr[start + 1];
    }

    int size()
    {
        return end - start;
    }

    bool isEmpty()
    {
        return size() == 0;
    }
};

int main()
{
    // Q *mq = new Q(4);
    Q mq(4);

    cout
        << mq.size() << endl;
    cout << mq.front() << endl;

    mq.pop();

    mq.push(1);
    cout << mq.size() << endl;
    cout << mq.front() << endl;
    mq.push(2);
    cout << mq.size() << endl;
    cout << mq.front() << endl;
    mq.push(3);
    cout << mq.size() << endl;
    cout << mq.front() << endl;
    mq.push(4);
    cout << mq.size() << endl;
    cout << mq.front() << endl;
    mq.push(5);
    cout << mq.size() << endl;
    cout << mq.front() << endl;

    cout << endl;

    mq.pop();
    cout << mq.size() << endl;
    cout << mq.front() << endl;
}