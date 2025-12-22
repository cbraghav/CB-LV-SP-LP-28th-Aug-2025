#include <bits/stdc++.h>

using namespace std;
// TC : O(V + E)
bool check_cycle_dfs(vector<vector<int>> &adj, int node, vector<int> &vis, vector<int> &pathvis)
{
    vis[node] = 1;
    pathvis[node] = 1;

    // upr se niche
    // neig
    for (int neig : adj[node])
    {
        if (vis[neig] == 0)
        {
            int check = check_cycle_dfs(adj, neig, vis, pathvis);
            if (check == true)
                return true;
        }
        else
        {
            if (pathvis[neig])
            {
                return true;
            }
        }
    }
    // niche se upr
    pathvis[node] = 0;
    return false;
}
int main()
{
    vector<vector<int>> edges = {
        {1, 2}, {1, 0}, {2, 4}, {2, 5}, {4, 6}, {5, 6}, {3, 0}, {6, 2}};
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
    vector<int> pathvis(N, 0);
    for (int i = 0; i < N; i++)
    {
        if (vis[i] == 0)          
        {
            cycle = check_cycle_dfs(adj_list, i, vis, pathvis);
            if (cycle == true)
            {
                cout << "True";
                return 0;
            }
        }
    }
    cout << "False";
}