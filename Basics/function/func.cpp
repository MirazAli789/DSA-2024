#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
bool prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= n - 1; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}
int mul(int m, int n) // m,n = formal arguments
{
    return m * n;
}
void fun()
{
    cout << "Hello \n";
}
int main()
{
    cout << sum(5, 23) << endl;
    cout << prime(11) << endl;
    cout << fact(6) << endl;
    cout << mul(12, 31) << endl;
    fun();
    cout<<"Hllo world \n"; 
    return 0;
}