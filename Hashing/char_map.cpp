// string hashing using map
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abeabdwrty";
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    // char c;
    // cin >> c;
    // cout << c << " appeared " << mp[c] << " times";
    // cout << endl;
    return 0;
}
