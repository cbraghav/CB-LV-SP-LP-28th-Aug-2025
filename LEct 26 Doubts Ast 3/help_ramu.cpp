#include <iostream>
int main()
{
    int c1, c2, c3, c4;
    vector<int> rick;
    vectir<int> cabs;

    //
    int r_o = 0;

    for (auto i : rick)
    {
        // i times
        int x1 = i * c1;
        int x2 = c2;
        r_o += min(x1, x2);
    }

    r_o = min(r_o, c3);

    int c_o = 0;

    for (auto i : cab)
    {
        // i times
        int x1 = i * c1;
        int x2 = c2;
        c_o += min(x1, x2);
    }

    c_o = min(c_o, c3);

    int ans = min(r_o + c_o, c4);

    cout << ans;

    return 0;
}