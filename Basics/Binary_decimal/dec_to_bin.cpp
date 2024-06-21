#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter number\n";
    cin >> num;
    int n = num;
    int ans = 0, rem, mul = 1;
    while (num > 0)
    {
        rem = num % 2;
        num /= 2;
        ans += rem * mul;
        mul *= 10;
    }
    cout << "Binary form of " << n << " = " << ans;
    return 0;
}