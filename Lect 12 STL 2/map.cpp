#include <bits/stdc++.h>

using namespace std;

int main()
{

    map<int, string> mp;

    // insert

    mp.insert({2, "naman"});

    mp[3] = "aman";
    mp[5] = "sohan";
    // mp.insert({1, "kartik"});
    mp[1] = "kartik";
    mp.insert({1, "raghav"});

    // traverse

    // for (auto i : mp)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    map<string, string> mp2;
    mp2["raghav"] = "eng";
    mp2["sohan"] = "maths";
    mp2["mohan"] = "eng";
    mp2.insert(make_pair("abcd", "efgh"));

    // for (pair<string, string> i : mp2)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // find

    // cout << mp2["naman"] << endl;
    // auto it = mp2.find("raghav");
    // if (it != mp2.end())
    // {
    //     cout << it->second << endl;
    // }
    // cout << mp2.size() << endl;
    // for (pair<string, string> i : mp2)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    for (auto i : mp2)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;

    mp2.erase("raghav");
    for (auto i : mp2)
    {
        cout << i.first << " " << i.second << endl;
    }
}