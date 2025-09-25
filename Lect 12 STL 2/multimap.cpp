#include <bits/stdc++.h>

using namespace std;

int main()
{
    multimap<int, int> mp1;

    mp1.insert({1, 2});
    mp1.insert({1, 5});
    // multimap<string, string> mp1;

    // mp1.insert({"raghav", "abc"});
    // mp1.insert({"raghav", "def"});

    for (auto i : mp1)
    {
        cout << i.first << " " << i.second << endl;
    }

    // // cout << mp1["raghav"] << endl;
    // auto it = mp1.find("raghav");
    // cout << it->first << " " << it->second << endl;
    // it++;
    // cout << it->first << " " << it->second << endl;
}