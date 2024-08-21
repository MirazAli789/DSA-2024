#include <bits/stdc++.h>
using namespace std;
bool is_pallindrome(string st, int s, int e)
{
    if (s > e)
    {
        return true;
    }
    else if (st[s] != st[e])
    {
        return false;
    }
    return is_pallindrome(st, s + 1, e - 1);
}
int main()
{
    string s;
    cout << "Enter a string \n";
    cin >> s;
    if (is_pallindrome(s, 0, s.size() - 1))
    {
        cout << "The string is a pallindrome\n";
    }
    else
    {
        cout << "The string is not a pallindrome\n";
    }
    return 0;
}