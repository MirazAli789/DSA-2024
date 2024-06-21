#include<bits/stdc++.h>
using namespace std;
int maxi_cons(vector<int>arr){
    int cnt =0,maxi=0;
    for(auto it:arr){
        if(it==1){
            cnt++;
            maxi = max(maxi,cnt);
        }
        else{
            cnt =0;
        }
    }
    return maxi;
}
int main()
{
    vector<int>arr(5);
    arr = {1,1,0,1,0};
    cout<<maxi_cons(arr);
    cout<<endl;
    return 0;
}
