#include <bits/stdc++.h>

using namespace std;

// class DSU
// {
// public:
//     vector<int> parent;

//     DSU(int sz)
//     {
//         parent.resize(sz);
//         for (int i = 0; i < sz; i++)
//         {
//             parent[i] = i;
//         }
//     }

//     void print_parent()
//     {

//         for (int i = 0; i < parent.size(); i++)
//         {
//             cout << "{" << i << ":" << parent[i] << "}";
//         }
//         cout << endl;
//     }

//     int Find(int a)
//     {
//         if (a == parent[a])
//             return a;
//         // return Find(parent[a]); // O(N)
//         return parent[a] = Find(parent[a]); // O(LogN)
//     }

//     void Union(int a, int b)
//     {
//         int leader_A = Find(a);
//         int leader_B = Find(b);

//         parent[leader_A] = leader_B;
//     }
// };

    class DSU
    {
    public:
        vector<int> parent;
        vector<int> rank, size;

        DSU(int sz)
        {
            parent.resize(sz);
            rank.resize(sz);
            size.resize(sz);
            for (int i = 0; i < sz; i++)
            {
                parent[i] = i;
                rank[i] = 0;
                size[i] = 1;
            }
        }

        void print_parent()
        {

            for (int i = 0; i < parent.size(); i++)
            {
                cout << "{" << i << ":" << parent[i] << "}";
            }
            cout << endl;
        }

        int Find(int a)
        {
            if (a == parent[a])
                return a;
            return Find(parent[a]); // O(N)
        }

        void Union(int a, int b)
        {
            int leader_A = Find(a);
            int leader_B = Find(b);

            // parent[leader_A] = leader_B;

            // Union by Rank
            // if (rank[leader_A] < rank[leader_B])
            // {
            //     parent[leader_A] = leader_B;
            // }
            // else if (rank[leader_B] < rank[leader_A])
            // {
            //     parent[leader_B] = leader_A;
            // }
            // else
            // {
            //     // r[leader_A] == r[leader_B];
            //     parent[leader_A] = leader_B;
            //     rank[leader_A]++;

            //     // parent[leader_B] = leader_A;
            //     // rank[leader_A]++;
            // }

            if (size[leader_A] < size[leader_B])
            {
                parent[leader_A] = leader_B;
                size[leader_B] += size[leader_A];
            }
            else
            {
                parent[leader_B] = leader_A;
                size[leader_A] += size[leader_B];
            }
        }
    };

bool cmp(vector<int> &a, vector<int> &b)
{
    return a[2] < b[2];
}

// TC : O(ELogE + ELogN)
int Kruskals_MST(int N, vector<vector<int>> edges)
{
    // edges -> {edg1, edg2,}
    // edge -> { u , v , wt}
    sort(edges.begin(), edges.end(), cmp); // ELogE

    DSU *d = new DSU(N);
    int ans = 0;
    int edge_cnt = 0;
    for (auto edge : edges) // O(E)
    {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
        if (d->Find(u) != d->Find(v)) // LogN
        {
            d->Union(u, v); // LogN
            ans += wt;
            edge_cnt++;
            if (edge_cnt == N - 1)
                break;
        }
    }
    return ans;
}

int main()
{

    DSU *d = new DSU(8);
    d->print_parent();

    d->Union(1, 3);
    d->Union(2, 4);
    d->Union(5, 7);
    d->Union(6, 0);
    d->Union(1, 7);
    d->Union(4, 0);
    d->Union(0, 7);

    d->print_parent();

    cout << endl;

    d->Find(2);
    d->Find(1);

    d->print_parent();

    ;
}
