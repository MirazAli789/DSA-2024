#include <bits/stdc++.h>
using namespace std;
int majo_brute(vector<int> arr, int n){
    int ans=-1;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                cnt++;
            }
        }
        if(cnt>(n/2)){
            ans= arr[i];
        }
    }
    return ans;
}
int majority(vector<int> arr, int n)
{
    int ans = -1;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > (n / 2))
        {
            ans = it.first;
        }
    }
    return ans;
}
int majo_optimal(vector<int>arr,int n){
    int ele,cnt=0;
    int i=0;
    ele = arr[0];
    while(i<n){
        if(arr[i]==ele){
            cnt++;
        }
        else {
            cnt--;
        }

        if(cnt==0){
            ele = arr[i+1];
            cnt=0;
        }
        i++;
    }
    return ele;
}
int main()
{
    vector<int> arr(5);
    arr = {5, 5, 1, 3, 5};
    cout << majo_optimal(arr, 5);
    cout << endl;
    return 0;
}
