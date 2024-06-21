//given a sorted array and and integer x
// find the lower bound of x
//lower bound is the smallest index 'i' such that arr[i]>=x
#include<bits/stdc++.h>
using namespace std;
int lower_brute(vector<int>arr,int x,int n){
    for(int i=0;i<n;i++){
        if(arr[i]>=x)
        return i;
    }

    return n;
}
int lower_optimal(vector<int>arr,int x,int n){
    int low = 0,high = n-1;
    int ans= n;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>=x){
            ans = min(ans,mid);
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int>arr = {1,2,2,3,3,5};
    int n = arr.size();
    cout<<lower_optimal(arr,3,n);
    cout<<endl;
    return 0;
}
