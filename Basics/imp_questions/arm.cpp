// 153 = 1^3 + 5^3 + 3^3 = 153 so, 153 is an Armstrong number
// 1263 = 1^4 + 2^4 + 6^4 + 3^4 = 1394 not an Armstrong number
#include <bits/stdc++.h>
using namespace std;
int digits(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}
bool arm(int n, int digit)
{
    int ans = 0, org = n, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans += pow(rem, digit);
    }

    return ans == org;
}
int main()
{
    int n;
    cout << "Enter number\n";
    cin >> n;
    int dig = digits(n);
    cout<<arm(n,dig);
    return 0;
}