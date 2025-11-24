#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        data = 0;
        prev = NULL;
        next = NULL;
    }

    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
    Node(int d, Node *p, Node *n)
    {
        data = d;
        prev = p;
        next = n;
    }
};

void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *insert_head(Node *head, int d)
{

    Node *nn = new Node(d, NULL, head);
    // Node* nn = new Node(d);
    // nn->prev = NULL;
    // nn->next = head;
    if (head == NULL)
    {
        return nn;
    }
    head->prev = nn;
    return nn;
}
Node *insert_tail(Node *head, int d)
{
    Node *nn = new Node(d);
    if (head == NULL)
    {
        return nn;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = nn;
    nn->prev = temp;
    return head;
}
Node *insert_x_after_y(Node *head, int x, int y)
{
    // if (head == NULL)
    // {
    //     cout << "ll empty";
    //     return;
    // }
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == y)
            break;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "ll empty or y not found" << endl;
        return head;
    }

    // y exist
    // temp <-> nn <-> temp2
    Node *nn = new Node(x);
    Node *temp2 = temp->next;
    nn->next = temp2;
    nn->prev = temp;
    temp->next = nn;
    if (temp2 != NULL)
        temp2->prev = nn;

    return head;
}

Node *delete_head(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    head->next->prev = NULL;
    return head->next;

    // Node *new_head = head->next;
    // new_head->prev = NULL;
    // head->next = NULL; // optional
    // return new_head;
}

Node *delete_tail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    Node *temp2 = temp->prev;
    temp2->next = NULL;
    temp->prev = NULL; // optional
    return head;
}

Node *delete_x(Node *head, int x)
{
    if (head == NULL)
        return NULL;
    if (head->data == x)
    {
        return delete_head(head);
    }

    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == x)
            break;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "x not found" << endl;
        return head;
    }
    if (temp->next == NULL)
    {
        // last elem
        return delete_tail(head);
    }

    Node *t1 = temp->prev;
    Node *t2 = temp->next;
    t1->next = t2;
    t2->prev = t1;
    delete (temp); // optional
    return head;
}
int main()
{
    Node *head = new Node(2);
    // head->prev = NULL;
    head->next = new Node(3, head, NULL);
    head->next->next = new Node(4, head->next, NULL);

    // NULL<-2<-> 3<-> 4->NULL
    // traverse(head);

    head = insert_head(head, 1);
    // traverse(head);

    head = insert_tail(head, 5);
    // traverse(head);
    // head = insert_tail(head, 7);
    // traverse(head);

    // head = insert_x_after_y(NULL, 99, 551);
    traverse(head);
    // head = delete_tail(head);
    // traverse(head);
}