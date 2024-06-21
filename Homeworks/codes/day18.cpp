/*1: Find the cube of a number using Function.
2: Reverse a number n using Function, Constraints:
-5000<=n<=5000
3: There are three numbers a,b,c. Put the value of a into b, put
value of b into c and put value of c into a. Do it using Function.
4: Swap 2 numbers a, b without using extra variables. Range of
-10000<=a,b<=100000.
5: Print “Hello Coder Army” n times using Function.
6: Given two numbers n, r. Find nCr (Combination). Use Function
here.*/

#include <bits/stdc++.h>
using namespace std;
int cube(int n)
{
    return n * n * n;
}
int reverse(int n)
{
    int ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            return 0;
        }
        ans = ans * 10 + rem;
    }
    return ans;
}
void swap_3(int &a, int &b, int &c)
{
    b = a; // b=1
    c = b; // c=1
    a = c; // a=1
}
void swap_2(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Hello coder army\n";
    }
}
int factorial(int n)
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
int ncr(int n,int r){
    if(n<r){
        return -1;
    }
    int a = factorial(n);
    int b = factorial(n-r);
    int t = factorial(r);
    int ans = a/(b*t);
    return ans;
}
int main()
{
    // cout<<cube(4);
    // cout<<endl;
    // cout<<reverse(-4999)<<endl;
    // int a,b,c;
    // cout<<"Enter a,b,c"<<endl;
    // cin>>a>>b>>c;
    // swap_3(a,b,c);
    // cout<<a<<" "<<b<<" "<<c;
    // int a = 3, b = 2;
    // swap_2(a, b);
    // cout << a << " " << b;
    int n,r;
    cout<<"Enter n,r"<<endl;
    cin>>n>>r;
    cout<<ncr(n,r);
    return 0;
}