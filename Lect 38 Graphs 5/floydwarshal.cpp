#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Floyd Warshal Algo :: TC : O(N^3)

    int N = 8;
    vector<vector<int>> edges = {{1, 7, 3}, {1, 2, 7}, {1, 3, 2}, {7, 0, 2}, {0, 2, 3}, {2, 4, 4}, {3, 4, 4}, {3, 5, 1}, {5, 4, 2}, {6, 4, 1}, {2, 7, -7}};

    vector<vector<int>> dis(N, vector<int>(N, 1e8));

    for (int i = 0; i < N; i++)
        dis[i][i] = 0;
    for (auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
        dis[u][v] = wt;
    }

    for (int k = 0; k < N; k++)
    {

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
            }
        }
    }

    // for (int i = 0; i < N; i++)
    //     if (dis[i][i] < 0)
    //     {
    //         cout << " negetative cycle in graph " << endl;
    //         return 0;
    //     }
    for (int i = 0; i < N; i++)
    {
        cout << i << " {";
        for (int j = 0; j < N; j++)
        {
            cout << dis[i][j] << " ";
        }
        cout << "}\n";
    }
}