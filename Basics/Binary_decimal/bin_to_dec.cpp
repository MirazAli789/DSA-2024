#include <bits/stdc++.h>
using namespace std;
int bin_dec(int num){
    int ans=0,rem,mul=1;
    while (num)
    {
        rem = num%10;
        num/=10;
        ans+=rem*mul;
        mul*=2;
    }
    return ans;
}
int main()
{
    // int num;
    // cout << "Enter binary number\n";
    // cin >> num;
    // int n = num;
    // int rem, mul = 1, ans = 0;
    // while (num > 0)
    // {
    //     rem = num % 10;
    //     num /= 10;
    //     ans = rem * mul + ans;
    //     mul *= 2;
    // }
    // cout << "Decimal form of " << n << " = " << ans;

    // cout<<endl;

    cout<<bin_dec(100111);
    return 0;
}