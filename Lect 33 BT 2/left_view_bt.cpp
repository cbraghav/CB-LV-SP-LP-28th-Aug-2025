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

vector<int> print_left_view(Node *root)
{

    vector<int> ans;

    if (root == NULL)
        return ans;

    queue<Node *> q;
    q.push(root);

    while (q.size())
    {
        int sz = q.size();
        for (int i = 0; i < sz; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (i == 0)
            {
                ans.push_back(curr->data);
            }
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    for (auto i : ans)
        cout << i << " ";
    return ans;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(7);
    root->right->left = new Node(6);
    /*

                      1
                    /  \
                   2    3
                 /  \   /
                4    5 6
                    /
                   7

      */
    print_left_view(root);
}