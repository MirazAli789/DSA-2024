#include <bits/stdc++.h>
using namespace std;
bool check_char_appeared(string unique, string test)
{
    unordered_set<char> testset(test.begin(), test.end());
    for (char ch : unique)
    {
        if (testset.find(ch) == testset.end())
        {
            return false;
        }
    }
    return true;
}
int findSubString(string s)
{
    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }
    // this string contains all the unique characters of the given string
    string unique;
    for (auto it : mpp)
    {
        unique += it.first;
    }
    int mini = INT_MAX;
    for (int i = 0; i < s.size(); i++)
    {
        string temp;
        for (int j = i; j < s.size(); j++)
        {
            temp += s[j];
        }
        if (check_char_appeared(unique, temp))
        {
            mini = min(mini, (int)temp.size());
        }
    }
    return mini;
}
int main()
{
    string s = "aaab";
    cout<<findSubString(s);
    return 0;
}
