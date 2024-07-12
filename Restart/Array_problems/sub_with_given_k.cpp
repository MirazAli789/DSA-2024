#include <bits/stdc++.h>
using namespace std;
int subarray_with_given(vector<int> arr, int k)
{
    int n = arr.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                ans = max(ans, j - i + 1);
            }
        }
    }
    return ans;
}
int sub_k(vector<int> &arr, int k)
{
    // this will work when the array contains bot positives and negative elements
    int n = arr.size();
    int sum = 0;
    int len = 0;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            len = max(len, i + 1);
        }
        int rem = sum - k;
        if (mpp.find(rem) != mpp.end())
        {
            len = max(len, i - mpp[rem]);
        }
        if(mpp.find(sum)==mpp.end()){
            mpp[sum] = i;
        }
    }
    return len;
}
int sum_sub_k(vector<int>arr,int k){
    // This will work only when the array contains only positives
    int n = arr.size();
    int sum = arr[0],len = 0;
    int i =0, j =0;
    while(i<=j && j<n){
        while(sum>k){
            sum-=arr[i];
            i++;
        }
        if(sum == k){
            len = max(len,j-i+1);
        }
        j++;
        if(j<n)
        sum+=arr[j];
    }
    return len;
}
int main()
{
    vector<int> arr = {2, 1, 3, 1, 1, 1};
    cout << sub_k(arr, 3);
    cout << endl;
    return 0;
}