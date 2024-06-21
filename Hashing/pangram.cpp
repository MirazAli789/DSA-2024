#include <bits/stdc++.h>
using namespace std;
bool ispangram(string s)
{
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (int i = 97; i <= 122; i++)
    {
        if (mp[i] == 0)
            return 0;
    }
    return 1;
}
bool is_pangram(string s){
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(int i=97;i<=122;i++){
        if(mp[i]==0)
        return 0;
    }
    return 1;
}
int main()
{
    string s = "sphinxofblackquartzjudgemyvow";
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (auto it : mp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    cout << endl;
    cout << ispangram(s);
    return 0;
}
