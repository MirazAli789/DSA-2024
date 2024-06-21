#include <bits/stdc++.h>
using namespace std;
int main()
{
    // last in first out
    stack<int> st;
    st.push(23);
    st.push(12);
    st.push(111);
    st.push(421);
    st.push(22);
    st.pop();
    cout << st.top();
    st.push(12);
    cout << st.top();
    cout << endl;
    cout << st.size();
    return 0;
}