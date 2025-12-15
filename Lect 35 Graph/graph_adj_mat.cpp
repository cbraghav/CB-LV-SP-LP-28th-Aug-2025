#include <bits/stdc++.h>
using namespace std;

// Unweighted and Undirected
void add_edge_UU(vector<vector<int>> &g, int u, int v)
{
    g[u][v] = 1;
    g[v][u] = 1;
}
// Unweighted and Directed
void add_edgeUD(vector<vector<int>> &g, int u, int v)
{
    g[u][v] = 1;
    // g[v][u] = 1;
}

// Weighted and Undirected
void add_edge_WU(vector<vector<int>> &g, int u, int v, int w)
{
    g[u][v] = w;
    g[v][u] = w;
}
// Weighted and Directed
void add_edge_WD(vector<vector<int>> &g, int u, int v, int w)
{
    g[u][v] = w;
    // g[v][u] = w;
}

void dfs(vector<vector<int>> &g, int node, vector<int> &vis, int &cnt)
{
    vis[node] = 1;
    cout << node << " ";
    cnt++;

    for (int i = 0; i < g.size(); i++)
    {
        if (g[node][i] == 1 && vis[i] == 0)
        {
            dfs(g, i, vis, cnt);
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
        // for (int neig : g[curr])
        for (int neig = 0; neig < g.size(); neig++)
        {
            if (g[curr][neig] == 1 && vis[neig] == 0)
            {
                // dfs(g, neig, vis);
                q.push(neig);
            }
        }
    }
}
int main()
{

    int N = 10;
    int E;

    vector<vector<int>> adj_mat(N, vector<int>(N, 0));

    // for (int i = 0; i < E; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;
    //     add_edge_UU(adj_mat, u, v);
    // }

    add_edge_UU(adj_mat, 1, 2);
    add_edge_UU(adj_mat, 1, 0);
    add_edge_UU(adj_mat, 0, 4);
    add_edge_UU(adj_mat, 4, 3);
    add_edge_UU(adj_mat, 4, 2);
    add_edge_UU(adj_mat, 3, 2);

    add_edge_UU(adj_mat, 7, 8);
    add_edge_UU(adj_mat, 8, 6);

    add_edge_UU(adj_mat, 9, 5);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }

    // cout << "DFS ";
    // vector<int> vis(N, 0);
    // dfs(adj_mat, 0, vis);
    // cout << endl;
    // for (auto &i : vis)
    // {
    //     i = 0;
    // }

    // cout << "DFS ";
    // // vector<int> vis(N, 1);
    // dfs(adj_mat, 1, vis);
    // cout << endl;
    // vis.clear();

    // cout << "BFS ";
    // vector<int> vis(N, 0);
    // bfs(adj_mat, 0, vis);
    // cout << endl;

    vector<int> vis(N, 0);
    int cnt_connected_comp = 0;
    for (int i = 0; i < N; i++)
    {
        if (vis[i] == 0)
        {
            int cnt_nodes = 0;
            bfs(adj_mat, i, vis);
            cout << " nodes in comp " << cnt_nodes << "\n";
            cnt_connected_comp++;
        }
    }

    cout << endl;

    cout << "nmber of connected cmp are " << cnt_connected_comp << endl;
}