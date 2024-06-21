#include <bits/stdc++.h>
using namespace std;
char transform(char c)
{
    return (c - 32);
}
char ch_tr(char c)
{
    if (c >= 97 && c <= 122)
    {
        return (c - 32);
    }
    else
    {
        return (c + 32);
    }
}
int main()
{
    // cout << transform('t');
    cout<<ch_tr('a');
    cout << endl;
    return 0;
}
