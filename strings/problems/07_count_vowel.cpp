// given a string, find the number of vowels present in it
#include <bits/stdc++.h>
using namespace std;
int count_vowel(string s, int i, int cnt)
{
    if (i >= s.size())
        return cnt;

    else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        return count_vowel(s, i + 1, cnt + 1);
    }

    else
        return count_vowel(s, i + 1, cnt);
}
int main()
{
    string s = "aeioty";
    cout<<count_vowel(s,0,0);
    cout << endl;
    return 0;
}
