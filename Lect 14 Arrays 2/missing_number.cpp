class Solution
{
public:
    int missingNumber(vector<int> &v)
    {
        int n = v.size();
        // // O(N^2)
        // for (int i = 0; i <= n; i++) {
        //     // i is the answer
        //     int cnt = 0;
        //     for (auto x : v) {
        //         if (x == i)
        //             cnt++;
        //     }
        //     if (cnt == 0)
        //         return i;
        // }
        // return n;

        // // TC (O(NLogN))
        // // SC O(N)
        // map<int,int> mp;
        // for(auto x: v){
        //     mp[x]++;
        // }

        // for(int i =0 ; i <= n; i++)
        // {
        //     if(mp[i] == 0) return i;
        // }
        // return n;

        // TC O(N)
        // SC O(1)
        // int sum = 0;
        // int tot_sum = (n * (n + 1)) / 2;

        // for (auto x : v)
        //     sum += x;
        // return tot_sum - sum;

        int xr = 0;
        for (int i = 0; i <= n; i++)
            xr = xr ^ i;

        for (auto x : v)
            xr = xr ^ x;
        return xr;
    }
};