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

// DFS
// TC O(N)
// SC (Auxilary stack space/ recursive stack)  : O(LogN) // O(H)
int sz_of_bt(Node *root)
{
    if (root == NULL)
        return 0;

    return sz_of_bt(root->left) + sz_of_bt(root->right) + 1;
}

// // BFS
// int sz_of_bt(Node *root)
// {
//     if (root == NULL)
//         return 0;

//     int ans = 0;
//     queue<Node *> q;
//     q.push(root);
//     ans++;

//     while (q.size())
//     {
//         Node *curr = q.front();
//         q.pop();
//         // ans++;

//         if (curr->left != NULL)
//         {
//             ans++;
//             q.push(curr->left);
//         }

//         if (curr->right != NULL)
//         {
//             ans++;
//             q.push(curr->right);
//         }
//     }
//     return ans;
// }
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

    // LevelOrder(root);

    cout << sz_of_bt(root) << endl;
}