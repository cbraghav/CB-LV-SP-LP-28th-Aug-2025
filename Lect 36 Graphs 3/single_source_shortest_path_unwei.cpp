#include <bits/stdc++.h>

using namespace std;

// unWeighted graph
// int main()
// {
//     int N = 8;
//     vector<vector<int>> edges = {{1, 7}, {1, 2}, {1, 3}, {7, 0}, {0, 2}, {2, 4}, {3, 4}, {3, 5}, {5, 4}, {6, 4}};

//     vector<vector<int>> adj_list(N);

//     for (auto edge : edges)
//     {
//         // u to v and v to u // undirected
//         // u to v // directed
//         int u = edge[0];
//         int v = edge[1];
//         adj_list[u].push_back(v);
//         adj_list[v].push_back(u);
//     }

//     vector<int> dis(N, 1e9); // dis from src
//     int src = 1;

//     queue<int> q; // node
//     // node, dis

//     q.push(src);
//     dis[src] = 0; // dis from src to src = 0;

//     while (q.size())
//     {
//         int node = q.front();
//         q.pop();

//         for (auto neig : adj_list[node])
//         {
//             // node to neig
//             if (dis[node] + 1 < dis[neig])
//             {
//                 dis[neig] = dis[node] + 1;
//                 q.push(neig);
//             }
//         }
//     }

//     for (int i = 0; i < N; i++)
//     {
//         cout << i << " " << dis[i] << endl;
//     }
// }

// Weighted Graph // Dijkstra Algo
int main()
{
    int N = 8;
    vector<vector<int>> edges = {{1, 7, 3}, {1, 2, 7}, {1, 3, 2}, {7, 0, 2}, {0, 2, 3}, {2, 4, 4}, {3, 4, 4}, {3, 5, 1}, {5, 4, 2}, {6, 4, 1}};

    vector<vector<pair<int, int>>> adj_list(N);

    for (auto edge : edges)
    {
        // u to v and v to u // undirected
        // u to v // directed
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
        adj_list[u].push_back({v, wt});
        // adj_list[v].push_back({u, wt});
    }

    vector<int> dis(N, 1e9);
    int src = 1;

    // set<pair<int, int>> st; // {wt, node}
    // priority_queue<pair<int, int>> pq; // default sorting order-> desc // max heap
    // priority_queue<T> -> priorit_queue<T, vector<T>, greater<T>> pq;     ascending // min heap

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    // st.insert({0, src});
    pq.push({0, src});
    dis[src] = 0;

    // while (st.size())//
    while (pq.size())
    {
        // int node = st.begin()->second;
        // int curr_dis = st.begin()->first;
        // st.erase(st.begin());

        int node = pq.top().second;
        int curr_dis = pq.top().first;
        pq.pop();

        // node : { {v,wt}, {v2,wt2}}
        for (auto it : adj_list[node])
        {
            int neig = it.first;     // v
            int edge_wt = it.second; // wt
            if (curr_dis + edge_wt < dis[neig])
            {

                dis[neig] = curr_dis + edge_wt;
                // st.insert({dis[neig], neig});
                pq.push({dis[neig], neig});
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << i << " " << dis[i] << "\n";
    }
}