#include <bits/stdc++.h>
using namespace std;

// TC : O(V + E)
void toposort(vector<vector<int>> &adj, int node, vector<int> &vis, stack<int> &st)
{
    vis[node] = 1;

    // upr se niche
    // neig
    for (int neig : adj[node])
    {
        if (vis[neig] == 0)
        {
            toposort(adj, neig, vis, st);
        }
    }
    // niche se upr
    st.push(node);
}

int main()
{
    vector<vector<int>> edges = {
        {1, 0},
        {1, 2},
        {5, 6},
        {2, 5},
        {2, 4},
        {4, 6},
        {3, 0},
    };
    int N = 7;

    vector<vector<int>> adj_list(N);

    for (auto edge : edges)
    {
        adj_list[edge[0]].push_back(edge[1]);
        // adj_list[edge[1]].push_back(edge[0]);
    }

    // cout << cycle_check_dfs(adj_list, 1, -1, vis);
    int cycle = false;
    vector<int> vis(N, 0);
    stack<int> st;
    for (int i = N; i >= 0; i--)
    {
        if (vis[i] == 0)
        {
            toposort(adj_list, i, vis, st);
        }
    }
    while (st.size())
    {
        cout << st.top() << " ";
        st.pop();
    }
}