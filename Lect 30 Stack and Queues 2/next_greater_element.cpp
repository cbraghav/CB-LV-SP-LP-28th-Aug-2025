#include <bits/stdc++.h>

using namespace std;

vector<int> next_greater(vector<int> v)
{
    // TC O(N)
    // SC O(N)
    stack<int> st;
    int n = v.size();
    vector<int> ans(n, -1);
    for (int i = n - 1; i >= 0; i--)
    {
        // find element greater than arr[i] in stack
        // but pop any smaller elements
        while (st.size() > 0)
        {
            if (st.top() <= v[i])
            {
                st.pop();
            }
            else
            {
                ans[i] = st.top();
                break; // this is ans[i]
            }
        }

        // if (st.size() == 0)
        // {
        //     ans[i] = -1;
        // }
        // else
        // {
        //     ans[i] = st.top();
        // }
        st.push(v[i]);
    }

    return ans;
}

int main()
{

    vector<int> v = {5, 1, 7, 9, 3, 9, 1, 3};

    vector<int> ans = next_greater(v);

    for (auto i : ans)
    {
        cout << i << " ";
    }
}