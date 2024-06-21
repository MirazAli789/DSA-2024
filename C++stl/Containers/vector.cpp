#include <bits/stdc++.h>
using namespace std;
void vec(vector<int> v)
{
    // auto it = v.begin();

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(23);
    v.push_back(43);
    v.push_back(13);
    v.push_back(56);
    v.push_back(87);
    v.pop_back();
    // cout<<*(v.rbegin());

    vec(v);
    // v.erase(v.begin() + 1);
    // v.erase(v.begin()+1,v.begin()+3);
    // v.erase(start,end);
    // v.insert(v.begin(), 34);
    // v.insert(v.begin(), 88);
    // v.insert(v.begin(),2,895);
    v.clear();
    vec(v);
    return 0;
}