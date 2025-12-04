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

vector<int> top_view(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;

    queue<pair<Node *, int>> q; // Node , x_coordinate
    map<int, int> mp;           // x_coor , value
    q.push({root, 0});

    while (q.size())
    {
        auto it = q.front();
        q.pop();
        Node *curr = it.first;
        int x_coor = it.second;
        if (mp.find(x_coor) == mp.end())
        {
            mp[x_coor] = curr->data;
        }

        if (curr->left != NULL)
            q.push({curr->left, x_coor - 1});
        if (curr->right != NULL)
            q.push({curr->right, x_coor + 1});
    }

    for (auto it : mp)
    {
        ans.push_back(it.second);
    }
    return ans;
}
vector<int> bottom_view(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;

    queue<pair<Node *, int>> q; // Node , x_coordinate
    map<int, int> mp;           // x_coor , value
    q.push({root, 0});

    while (q.size())
    {
        auto it = q.front();
        q.pop();
        Node *curr = it.first;
        int x_coor = it.second;
        // if (mp.find(x_coor) == mp.end())
        // {
        mp[x_coor] = curr->data;
        // }

        if (curr->left != NULL)
            q.push({curr->left, x_coor - 1});
        if (curr->right != NULL)
            q.push({curr->right, x_coor + 1});
    }

    for (auto it : mp)
    {
        ans.push_back(it.second);
    }
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
    vector<int> ans = bottom_view(root);
    for (auto i : ans)
        cout << i << " ";
}