#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b) //actual argument
{
    return a + b;
}
void incr(int n)
{
    n++;
}
int main()
{
    int a = 4, b = 6;
    cout << sum(a, b)<< endl; //formal argument 
    // a and b are passed by value
    incr(a);
    cout << a << endl; //a will not increase because it is passed by value
    
    return 0;
}