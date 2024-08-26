// given a string, reverse that string using recursion
#include <bits/stdc++.h>
using namespace std;
void rev(string &s, int i, int j)
{
    if (i >= j)
        return;

    else
    {
        swap(s[i], s[j]);
        rev(s, i + 1, j - 1);
    }
}
int main()
{
    string s = "hello";
    rev(s, 0, s.size() - 1);
    cout << s;
    cout << endl;
    return 0;
}
