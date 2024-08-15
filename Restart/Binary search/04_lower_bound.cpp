#include<bits/stdc++.h>
using namespace std;
int lower_bnd(int arr[],int n,int x)
{
    int ans = INT_MAX;
    int low = 0, high = n-1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]>=x){
            ans = min(ans,mid);
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(ans == INT_MAX){
        ans = n;
    }
    return ans;
}
int main()
{
    
    cout<<endl;
    return 0;
}
