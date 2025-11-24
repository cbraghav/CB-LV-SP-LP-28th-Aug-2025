#include <bits/stdc++.h>

using namespace std;

class mySt
{
private:
    int *arr;
    int cap = 100;
    int ptr = 0;

public:
    mySt()
    {
        arr = new int[cap];
        ptr = 0;
    }
    mySt(int c)
    {
        cap = c;
        arr = new int[cap];
    }
    //
    void push(int x)
    {
        if (ptr == x)
        {
            cout << "stack is full" << endl;
            return;
        }
        arr[ptr] = x;
        ptr++;
    }

    // pop
    void pop()
    {
        if (ptr == 0)
        {
            cout << "stack is empty" << endl;
            return;
        }
        ptr--;
    }

    // top
    int top()
    {
        if (ptr == 0)
        {
            cout << "stack is empty";
            return INT_MIN;
        }
        return arr[ptr - 1];
    }

    // size
    int size()
    {
        return ptr;
    }

    // isEmpty
    bool isEmpty()
    {
        return size() == 0;
    }
};
int main()
{
    mySt *st = new mySt(5);

    cout << st->size() << endl;
    cout << "top " << st->top() << endl;
    st->push(1);
    st->push(2);
    st->push(3);
    cout << st->size() << endl;
    cout << "top " << st->top() << endl;

    st->pop();

    cout << st->size() << endl;
    cout << "top " << st->top() << endl;

    st->push(99);

    cout << st->size() << endl;
    cout << "top " << st->top() << endl;
}