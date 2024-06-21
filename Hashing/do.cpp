#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    string s = "abdeabadenhw";
    int hash[26] = {0};
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        hash[s[i] - 'a'] += 1;
    }
    cout << c << " appeared " << hash[c - 'a'] << " times ";
    cout << endl;
    return 0;
}
