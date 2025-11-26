#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int d)
    {
        data = d;
        next = NULL;
    }
    Node(int d, Node *n)
    {
        data = d;
        next = n;
    }
};

class Q
{

    Node *head, *tail;
    int sz = 0;

public:
    Q()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    void push(int x)
    {
        Node *nn = new Node(x);
        if (head == NULL)
        {
            head = nn;
            tail = nn;
        }
        else
        {
            tail->next = nn;
            tail = tail->next;
            // cout << "[" << head->data << " " << tail->data << " ]";
        }
        sz++;
    }

    void pop()
    {
        if (head == NULL) // head == tail
        {
            cout << "queue is empty \n";
            return;
        }

        if (head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            head = head->next;
        }
        sz--;
    }

    int front()
    {
        if (head == NULL)
        {
            cout << "queue is empty";
            return INT_MIN;
        }
        // cout << "[" << head->data << " " << tail->data << " ]";
        return head->data;
    }

    int size()
    {
        return sz;
    }

    bool isEmtpy()
    {
        return sz == 0;
    }
};

int main()
{
    Q *mq = new Q();

    cout
        << mq->size() << endl;
    cout << mq->front() << endl;

    mq->pop();

    mq->push(1);
    cout << mq->size() << endl;
    cout << mq->front() << endl;
    mq->push(2);
    cout << mq->size() << endl;
    cout << mq->front() << endl;
    mq->push(3);
    cout << mq->size() << endl;
    cout << mq->front() << endl;
    mq->push(4);
    cout << mq->size() << endl;
    cout << mq->front() << endl;
    mq->push(5);
    cout << mq->size() << endl;
    cout << mq->front() << endl;

    cout << endl;

    mq->pop();
    cout << mq->size() << endl;
    cout << mq->front() << endl;
}