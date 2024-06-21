#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number\n";
    cin>>num;
    int rem, sum =0;
    while (num>0)
    {
        rem = num%10;
        num /= 10;
        sum+=rem;
    }
    cout<<"sum of digits = "<<sum;
    return 0;
}