#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,rem,ans =0,mul=1;
    cout<<"Enter number \n";
    cin>>num;
    int n = num;
    while (num>0)
    {
        rem = num%8;
        num/=8;
        ans += rem*mul;
        mul*=10;
    }
    cout<<"Octal form of "<<n<<" = "<<ans;

    return 0;
}