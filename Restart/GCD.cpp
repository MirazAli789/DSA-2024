#include <bits/stdc++.h>
using namespace std;
int gcd(int A, int B)
{
    int gcd = INT_MIN;
    int mini = min(A, B);
    for (int i = 1; i <= mini; i++)
    {
        if (A % i == 0 && B % i == 0)
        {
            gcd = max(gcd, i);
        }
    }
    return gcd;
}
int lcm(int A, int B)
{
    int lcm = INT_MAX;
    int maxi = max(A, B);
    for (int i = maxi; i <= (A * B); i++)
    {
        if (i % A == 0 && i % B == 0)
        {
            lcm = min(lcm, i);
        }
    }
    return lcm;
}
int main()
{
    cout << gcd(5, 10) << endl;
    cout << lcm(10, 5);
    cout << endl;
    return 0;
}