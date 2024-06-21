#include<bits/stdc++.h>
using namespace std;
int maxi_sub_sum_brute(vector<int>arr,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi=max(sum,maxi);
        }
    }
    return maxi;
}
int maxi_sub_sum_optimal(vector<int>arr,int n){
    int maxi = arr[0],sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        maxi = max(maxi,sum);

        if(sum<0)
        sum=0;
    }
    return maxi;
}
int main()
{
    vector<int>arr(9);
    arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxi_sub_sum_optimal(arr,9);
    cout<<endl;
    return 0;
}
