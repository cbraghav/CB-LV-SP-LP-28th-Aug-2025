#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;   // data of current node
    Node *next; // pointer to next node

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

// TC -> O(N)
void traverseLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// TC - O(N)
bool searchLL(Node *head, int X)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == X)
            return true;
        temp = temp->next;
    }
    return false;
}
// TC -> O(1)
Node *insertBeginLL(Node *head, int X)
{
    // Node* nn = new Node(X);
    // nn->next = head;
    Node *nn = new Node(X, head);
    return nn;
}
// TC -> O(N)
Node *insertEndLL(Node *head, int X)
{
    Node *nn = new Node(X);
    if (head == NULL)
        return nn;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = nn;
    return head;
}
// TC-> O(N)
Node *insert_x_after_y_LL(Node *head, int x, int y)
{
    if (head == NULL)
    {
        cout << "empty LL" << endl;
        return head;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == y)
            break;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "could not find the element y : " << y << endl;
        return head;
    }
    Node *forward = temp->next;
    Node *nn = new Node(x);
    temp->next = nn;
    nn->next = forward;
    return head;
}
// O(N)
Node *insert_x_before_yLL(Node *head, int x, int y)
{
    if (head == NULL)
    {
        cout << "emptu LL" << endl;
        return head;
    }
    if (head->data == y)
    {
        Node *nn = new Node(x, head);
        return nn;
    }

    Node *prev = NULL;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == y)
            break;
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "could not find the element y : " << y << endl;
        return head;
    }

    // prev -> temp     : now
    // prev->nn -> temp : want

    // Node* nn = new Node(x);
    // nn->next = temp;
    Node *nn = new Node(x, temp);
    if (prev != NULL)
        prev->next = nn;
    return head;
}
// O(1)
Node *deleteHeadLL(Node *head)
{
    if (head == NULL)
    {
        cout << "LL is empty";
        return NULL;
    }

    return head->next;
}
int main()
{
    Node *head = new Node(1);       //  1->NULL
    head->next = new Node(2);       // 1-> 2-> NULL
    head->next->next = new Node(3); // 1->2->3->NULL

    // // Traverse ?
    // traverseLL(head);
    // // cout << searchLL(head, 5);

    // head = insertBeginLL(head, 4);
    // head = insertBeginLL(head, 5);

    // traverseLL(head);

    // head = insertEndLL(head, 5);
    // traverseLL(head);
    // head = insert_x_after_y_LL(NULL, 99, 23);
    // traverseLL(head);
    traverseLL(head);
    head = deleteHeadLL(head);
    head = deleteHeadLL(head);
    head = deleteHeadLL(head);
    head = deleteHeadLL(head);
    traverseLL(head);
}