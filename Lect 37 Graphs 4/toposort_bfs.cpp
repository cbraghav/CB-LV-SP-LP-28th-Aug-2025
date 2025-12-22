#include <bits/stdc++.h>
using namespace std;
// Kahn's Algo
// Topo sort BFS
// Cycle detection using BFS in Directed Graphs
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
        {6, 2}};
    int N = 7;

    vector<vector<int>> adj_list(N);

    for (auto edge : edges)
    {
        adj_list[edge[0]].push_back(edge[1]);

        // adj_list[edge[1]].push_back(edge[0]);

        // indeg[edge[1]]++
    }

    // cout << cycle_check_dfs(adj_list, 1, -1, vis);
    int cycle = false;
    vector<int> vis(N, 0);

    vector<int> indeg(N);

    for (int i = 0; i < N; i++)
    { // i to neigh
        for (auto neig : adj_list[i])
        {
            // i to neig
            indeg[neig]++;
        }
    }

    // BFS
    queue<int> q;
    for (int i = 0; i < N; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
    }
    vector<int> ans;
    while (q.size())
    {
        int node = q.front();
        q.pop();

        // cout << node << " ";
        ans.push_back(node);

        for (auto neig : adj_list[node])
        {
            indeg[neig]--;
            if (indeg[neig] == 0)
            {
                q.push(neig);
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (indeg[i] > 0)
        {
            cout << "CYCLE";
            return 0;
        }
    }
    // if(ans.size() == N) // No cycle
    // else // cycle

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}