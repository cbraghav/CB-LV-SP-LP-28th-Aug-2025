#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
    Node(int d, Node *l, Node *r)
    {
        data = d;
        left = l;
        right = r;
    }
};

// TC : O(N) : N is the number of nodes in the tree
void Inorder(Node *root)
{ // Left Visit Right
    if (root == NULL)
        return;

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

// TC : O(N) : N is the number of nodes in the tree
void PreOrder(Node *root)
{ // Visit Left Right;

    if (root == NULL)
        return;

    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

// TC : O(N) : N is the number of nodes in the tree
void PostOrder(Node *root)
{ // Left Right Visit
    if (root == NULL)
        return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

// TC O(N)
// SC O(N)
void LevelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (q.size())
    {
        int sz = q.size();
        for (int i = 0; i < sz; i++)
        {
            // pop the element
            Node *curr = q.front();
            q.pop();
            // print
            cout << curr->data << " ";
            // push children

            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        cout << endl;
    }
    return;
}

int main()
{

    /*

                    1
                  /  \
                 2    3
               /  \   /
              4    5 6
                  /
                 7

    */

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(7);
    root->right->left = new Node(6);

    // Inorder(root);
    // cout << endl;
    // PreOrder(root);
    // cout << endl;
    // PostOrder(root);
    // cout << endl;

    LevelOrder(root);
}