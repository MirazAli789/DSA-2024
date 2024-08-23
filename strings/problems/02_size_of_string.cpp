#include <bits/stdc++.h>
using namespace std;
int sizeof_string(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    string s;
    cout << "Enter a string\n";
    cin >> s;
    cout << "Size of the string is : " << sizeof_string(s);
    cout << endl;
    return 0;
}
