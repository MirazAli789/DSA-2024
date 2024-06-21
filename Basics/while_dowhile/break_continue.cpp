#include<bits/stdc++.h>
using namespace std;
int main()
{
    // break statements
    // int i= 1,n;
    // cout<<"Enter n\n";
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if(i==4){
    //         break;
    //     }
    //     cout<<i<<" ";
    // }
    // continue statement
    int n;
    cout<<"Enter n\n";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0){
            continue;
        }
        cout<<i<<" ";
    }
    
    return 0;
}