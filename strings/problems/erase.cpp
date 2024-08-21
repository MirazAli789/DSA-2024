#include <bits/stdc++.h>
using namespace std;
int main()
{
    // the .erase() function in string is used for removing a character from the string.
    // it takes two parameters:
    // s.erase(starting_index,no. of characters to be removed)
    string s;

    cout << "Enter a string \n";
    cin >> s;
    s.erase(0, 2);
    cout << s;
    return 0;
}