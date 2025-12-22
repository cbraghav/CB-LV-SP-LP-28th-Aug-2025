#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Bellman ford algo TC: O(N*E ) // O(V*E)

    int N = 8;
    vector<vector<int>> edges = {{1, 7, 3}, {1, 2, 7}, {1, 3, 2}, {7, 0, 2}, {0, 2, 3}, {2, 4, 4}, {3, 4, 4}, {3, 5, 1}, {5, 4, 2}, {6, 4, 1}, {2, 7, -7}};

    vector<int> dis(N, 1e9);

    int src = 1;
    dis[src] = 0;
    // N - 1 times
    for (int i = 1; i < N; i++) // O(N)
    {
        for (auto edge : edges) // O(E)
        {
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];
            if (dis[u] + wt < dis[v])
            {
                dis[v] = dis[u] + wt;
            }
        }
    }

    // Nth time
    for (auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
        if (dis[u] + wt < dis[v])
        {
            cout << "Cycle in graph" << endl;
            return 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << i << " :" << dis[i] << endl;
    }
}