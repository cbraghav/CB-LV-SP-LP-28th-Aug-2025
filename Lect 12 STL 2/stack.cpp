#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    cout << endl;
    /*
    stack<T> st;
    */

    stack<int> st;

    // insert ->  .push() // O(1)
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // acess
    // cout << st.top() << endl;

    // delete -> .pop
    // st.pop();
    // cout << st.top() << endl;

    cout << "size of stack " << st.size() << endl;
    stack<int> st2(st);
    while (st2.size() > 0)
    {
        cout << st2.top() << endl;
        st2.pop();
    }

    cout << "size of stack " << st.size() << endl;

    cout << endl;
}