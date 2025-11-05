#include <bits/stdc++.h>

using namespace std;

// TC : O(N)
bool is_possible(vector<int> &v, int num_cows, int min_dis)
{

    int last_cow_placed_pos = v[0];
    int cows_placed = 1;

    for (int i = 1; i < v.size(); i++)
    {
        // try to put the cow on ith stall
        int dis = v[i] - last_cow_placed_pos;
        if (dis >= min_dis)
        {
            cows_placed++;
            last_cow_placed_pos = v[i];
        }
        if (cows_placed >= num_cows)
        {
            return true;
        }
    }
    //  if(cows_placed >= num_cows){
    //         return true;
    //     }
    return false;
}

void sol()
{

    int N, C;
    cin >> N >> C;
    // vector<int> v(N) ;

    // for(int i = 0 ; i < N; i++){
    //     cin>>v[i];
    // }

    vector<int> v;
    for (int i = 0; i < N; i++) // O(N)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // stalls ?
    sort(v.begin(), v.end()); // O(NlogN)

    int ans = 0;

    // for (int i = 1; i <= v[N - 1] - v[0]; i++) // O( max(v[i]) - min(v[i]))
    // {
    //     if (is_possible(v, C, i)) // O(N)
    //     {
    //         // is it possible to place C cows in stalls ofarangement v, such that , every cow has min dis of i
    //         ans = i;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // cout << ans << endl;

    // Total time complexity ; O(N*maxstslls) + N log N

    int low = 1;
    int hi = v[N - 1];

    while (low <= hi)
    {
        int mid = (low + hi) / 2;

        if (is_possible(v, C, mid)) // O(N)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << ans << endl;

    // TC  : O ( Log(MaxStalls) * (N) )  -> N Log MaxStalls + N log N
}

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        sol();
    }
    return 0;
}