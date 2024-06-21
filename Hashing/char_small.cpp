// charecter hashing
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "asfsasjasd";
    int arr[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i] - 97] += 1;
    }
    char c;
    cout << "Enter the charecter you want to hash" << endl;
    cin >> c;

    int ans = arr[c - 'a'];
    cout << c << " appeared " << ans << " times";
    cout << endl;
    return 0;
}
