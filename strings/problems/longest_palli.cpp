#include<bits/stdc++.h>
using namesapce std;
int longestPalindrome(string s) 
{
    unordered_map<char,int>mpp;
    int ans = 0;
    for(int i=0;i<s.size();i++)
    {
        mpp[s[i]]++;
    }
    bool odd = 0;
    for(auto it:mpp)
    {
        if(it.second%2==0)
        { 
            ans+=it.second;
        }
        else
        {
            ans+=(it.second-1);
            odd=1;
        }
    }
    if(odd == 1)
    {
        return ans+1;
    }
    return ans;
}
int main()
{

	return 0;
}