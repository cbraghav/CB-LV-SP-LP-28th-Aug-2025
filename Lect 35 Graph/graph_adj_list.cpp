#include <bits/stdc++.h>
using namespace std;

void add_edgeUU(vector<vector<int>> &g, int u, int v)
{
    g[u].push_back(v);
    g[v].push_back(u);
}

void add_edgeUD(vector<vector<int>> &g, int u, int v)
{
    g[u].push_back(v);
    // g[v].push_back(u);
}

void add_edgeWU(vector<vector<pair<int, int>>> &g, int u, int v, int w)
{
    g[u].push_back({v, w});
    g[v].push_back({u, w});
}

void add_edgeWD(vector<vector<pair<int, int>>> &g, int u, int v, int w)
{
    g[u].push_back({v, w});
}

void dfs(vector<vector<int>> &g, int node, vector<int> &vis)
{
    // if (vis[node] == 1)
    //     return;
    vis[node] = 1;
    cout << node << " ";

    // neigh
    for (int neig : g[node])
    {
        if (vis[neig] == 0)
        {
            dfs(g, neig, vis);
        }
    }
}

void bfs(vector<vector<int>> &g, int node, vector<int> &vis)
{

    queue<int> q;
    q.push(node);
    while (q.size())
    {

        int curr = q.front();
        q.pop();
        if (vis[curr] == 1)
        {
            continue;
        }
        vis[curr] = 1;
        cout << curr << " ";
        for (int neig : g[curr])
        {
            if (vis[neig] == 0)
            {
                // dfs(g, neig, vis);
                q.push(neig);
            }
        }
    }
}
int main()
{

    int N = 5;
    int E;

    vector<vector<int>> adj_list(N); // unweighted
    // vector<vector<pair<int, int>>> adj_list(N);
    // 0: {}
    // 1: {}
    // 2: {}

    // for (int i = 0; i < E; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;
    //     add_edge_UU(adj_list, u, v);
    // }

    add_edgeUU(adj_list, 1, 0);
    add_edgeUU(adj_list, 1, 2);
    add_edgeUU(adj_list, 0, 4);
    add_edgeUU(adj_list, 4, 3);
    add_edgeUU(adj_list, 4, 2);
    add_edgeUU(adj_list, 3, 2);

    for (int i = 0; i < N; i++)
    {
        cout << i << " { ";
        // for (pair<int, int> neigh : adj_list[i])
        // {
        // cout << "{" << neigh.first << " " << neigh.second << " }";
        // }

        for (int neigh : adj_list[i])
        {
            cout << neigh << " ";
        }
        cout << "}";
        cout << endl;
    }

    // cout << "DFS ";
    // vector<int> vis(N, 0);
    // dfs(adj_list, 0, vis);
    // cout << endl;
    // for (auto &i : vis)
    // {
    //     i = 0;
    // }

    // cout << "DFS ";
    // // vector<int> vis(N, 1);
    // dfs(adj_list, 1, vis);
    // cout << endl;
    // vis.clear();

    cout << "BFS ";
    vector<int> vis(N, 0);
    bfs(adj_list, 0, vis);
    cout << endl;
}