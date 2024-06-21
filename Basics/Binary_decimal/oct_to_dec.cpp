#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, ans = 0, mul = 1, rem;
    cout << "Enter number\n";
    cin >> num;
    int n = num;
    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        ans += rem * mul;
        mul *= 8;
    }
    cout << "decimal form of " << n << " = " << ans;
    return 0;
}