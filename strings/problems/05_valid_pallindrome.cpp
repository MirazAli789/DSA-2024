#include <bits/stdc++.h>
using namespace std;
void make_valid(string &s)
{
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isalnum(s[i]))
        {
            temp += s[i];
        }
    }
    s = temp;
}
// convert the uppercase letters into lowercase
void conv_lower(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            s[i] += ('a' - 'A');
        }
    }
}
bool check_pall(string s)
{
    int i = 0, j = s.size() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    string s = "A man, a plan, a canal: Panama";
    make_valid(s);
    conv_lower(s);
    cout << s<<endl;
    cout<<check_pall(s);
    cout << endl;
    return 0;
}
