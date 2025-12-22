#include <bits/stdc++.h>

using namespace std;

// TC: O(   N + E)
string cycle_check_bfs(vector<vector<int>> &edges, int N, vector<int> &vis, int src)
{

    vector<vector<int>> adj_list(N);

    for (auto edge : edges)
    {
        adj_list[edge[0]].push_back(edge[1]);
        adj_list[edge[1]].push_back(edge[0]);
    }

    vis[src] = 1; // 1 means visited // 0 means unvisted

    queue<pair<int, int>> q; // {node, parent}
    q.push({src, -1});       // src, par =-1

    while (q.size())
    {
        int node = q.front().first;
        int par = q.front().second;
        q.pop();

        // nei
        for (int neig : adj_list[node])
        {
            if (vis[neig] == 0)
            {
                vis[neig] = 1;
                q.push({neig, node});
            }
            else
            {
                if (par != neig)
                {
                    return "True";
                }
            }
        }
    }
    return "False";
}
string cycle_check_dfs(vector<vector<int>> adj_list, int node, int par, vector<int> &vis)
{
    vis[node] = 1;
    for (int neig : adj_list[node])
    {
        if (vis[neig] == 0)
        {
            // vis[neig] = 1;
            // q.push({neig, node});
            if (cycle_check_dfs(adj_list, neig, node, vis) == "True")
            {
                return "True";
            }
        }
        else
        {
            if (par != neig)
            {
                // cout << "abc" << par << "  " << neig << endl;
                return "True";
            }
        }
    }
    return "False";
}
int main()
{
    vector<vector<int>> edges = {
        {1, 2}, {2, 0}, {1, 0}};
    int N = 3;
    vector<int> vis(N, 0);
    cout << cycle_check_bfs(edges, N, vis, 1) << endl;

    vector<vector<int>> adj_list(N);

    for (auto edge : edges)
    {
        adj_list[edge[0]].push_back(edge[1]);
        adj_list[edge[1]].push_back(edge[0]);
    }

    for (int i = 0; i < N; i++)
        vis[i] = 0;
    cout << cycle_check_dfs(adj_list, 1, -1, vis);
}