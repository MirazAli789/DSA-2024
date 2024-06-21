#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void incr(int &n)
{
    n++;
}
int main()
{
    int a = 12;
    int b = 23;
    swap(a, b);
    cout << a << endl
         << b;

    int n = 12;
    incr(n);
    cout<<endl;
    cout << n << " ";
    return 0;
}