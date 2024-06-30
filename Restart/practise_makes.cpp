#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int gcd = INT_MIN;
    int mini = min(a,b);
    for(int i= 1;i<=mini;i++){
        if(a%i==0&&b%i==0){
            gcd = max(gcd,i);
        }
    }
    return gcd;
}
int lcm(int a,int b){
    int lcm = INT_MAX;
    int maxi = max(a,b);
    for(int i=maxi;i<=(a*b);i++){
        if(i%a==0&&i%b==0){
            lcm = min(lcm,i);
        }
    }
    return lcm;
}
int main()
{
    cout<<gcd(3,15);
    cout<<endl;
    return 0;
}