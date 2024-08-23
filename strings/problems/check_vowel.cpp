#include <bits/stdc++.h>
using namespace std;
bool is_vowel(char c)
{
    if (c == 65 || c == 69 || c == 73 || c == 79 || c == 85 || c == 97 || c == 101 || c == 105 || c == 111 || c == 117)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void sort_vowel(string &s)
{
    string temp;
    for (int i = 0; i < s.size(); i++)
    {
        if (is_vowel(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    sort(temp.begin(), temp.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (is_vowel(s[i]))
        {
            s[i] = '~';
        }
    }
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '~')
        {
            s[i] = temp[j];
            j++;
        }
    }
}
int main()
{
    string s;
    cout << "Enter a string\n";
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (is_vowel(s[i]))
        {
            cout << s[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
