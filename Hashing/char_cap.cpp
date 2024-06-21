// when the string contains both capital and small letters
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "AsebAabtyuOpW";
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    char c;
    cin >> c;
    cout << c << " appeaared " << hash[c] << " times ";
    cout << endl;
    return 0;
}
