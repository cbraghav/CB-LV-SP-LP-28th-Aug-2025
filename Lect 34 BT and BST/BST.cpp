#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

bool SearchBST(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;
    if (root->data < x)
    {
        return SearchBST(root->right, x);
    }
    return SearchBST(root->left, x);
}
// TC O(LogN) -> worst case O(N)
Node *InsertBST(Node *root, int x)
{
    if (root == NULL)
    {
        return new Node(x);
    }

    if (root->data < x)
    {
        root->right = InsertBST(root->right, x);
    }
    else
    {
        root->left = InsertBST(root->left, x);
    }
    return root;
}
// O(LogN)
Node *findSucc(Node *root)
{
    root = root->right; // greater
    while (root != NULL && root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
Node *DeleteBST(Node *root, int x)
{

    if (root == NULL)
        return root;
    if (root->data < x)
    {
        root->right = DeleteBST(root->right, x);
    }
    else if (root->data > x)
    {
        root->left = DeleteBST(root->left, x);
    }
    else
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {

            return NULL;
        }
        // 1 child

        if (root->left == NULL)
            return root->right;
        if (root->right = NULL)
            return root->left;

        // 2 child
        Node *succ = findSucc(root); //
        root->data = succ->data;
        root->right = DeleteBST(root->right, succ->data);
    }
    return root;
}
int main()
{

    Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(10);
    root->left->left = new Node(2);
    root->right->left = new Node(8);
    root->right->right = new Node(15);

    cout << SearchBST(root, 12);

    root = InsertBST(root, 12);

    cout << SearchBST(root, 12);

    root = DeleteBST(root, 2);

    cout << SearchBST(root, 2);
}