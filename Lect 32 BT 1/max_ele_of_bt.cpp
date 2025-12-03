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

int max_ele(Node *root)
{
    if (root == NULL)
        return 0;
    // int ans = root->data;
    int left = max_ele(root->left);   // l
    int right = max_ele(root->right); // r

    // return max(left, right, ans);
    return max({left, right, root->data});
    // sum - > left + right + root->data;
}
// //  BFS
// int max_ele(Node *root)
// {
//     if (root == NULL)
//         return 0;

//     int ans = 0;
//     queue<Node *> q;
//     q.push(root);

//     while (q.size())
//     {
//         Node *curr = q.front();
//         q.pop();
//         ans = max(ans, curr->data);
//

//         if (curr->left != NULL)
//         {

//             q.push(curr->left);
//         }

//         if (curr->right != NULL)
//         {
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

    Node *root = new Node(13);
    root->left = new Node(32);
    root->right = new Node(3);

    root->left->left = new Node(14);
    root->left->right = new Node(45);
    root->left->right->left = new Node(17);
    root->right->left = new Node(6);

    // Inorder(root);
    // cout << endl;
    // PreOrder(root);
    // cout << endl;
    // PostOrder(root);
    // cout << endl;

    // LevelOrder(root);

    cout << max_ele(root) << endl;
}