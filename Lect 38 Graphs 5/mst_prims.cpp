#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Prims Algo : E log V

    int N = 6;
    vector<vector<int>> edges = {
        {2, 3, 1},
        {4, 3, 2},
        {4, 5, 5},
        {3, 5, 1},
        {1, 2, 2},
        {4, 2, 3},
        {1, 4, 1}};

    vector<vector<pair<int, int>>> adj(N);
    for (auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }

    set<pair<int, int>> st; // wt, node

    vector<int> vis(N, 0);
    int src = 4;
    st.insert({0, src});
    int sum = 0;

    while (st.size())
    {
        int node = st.begin()->second;
        int wt = st.begin()->first;
        st.erase(st.begin());
        if (vis[node] == 1)
        {
            continue;
        }

        vis[node] = 1;
        sum += wt; // adding it in our mst

        for (auto neig : adj[node])
        {
            int ne_node = neig.first;
            int edge_wt = neig.second;
            if (vis[ne_node] == 0)
            {
                st.insert({edge_wt, ne_node});
            }
        }
    }

    cout << src << " " << sum << endl;
}