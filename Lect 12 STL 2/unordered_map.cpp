#include <bits/stdc++.h>

using namespace std;

int main()
{

    unordered_map<string, string> ump;

    ump.insert({"abc", "def"});
    ump.insert({"abc2", "def2"});
    ump.insert({"abc3", "def3"});
    ump["xyz"] = "fsdfs";
    ump["abc"] = "lllll0";
    for (auto i : ump)
    {
        cout << i.first << "  " << i.second << endl;
    }
    cout << endl;
    ump.erase("xyz");
    for (auto i : ump)
    {
        cout << i.first << "  " << i.second << endl;
    }
}