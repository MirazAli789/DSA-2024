#include <bits/stdc++.h>
using namespace std;
long long pairWithMaxSum(long long arr[], long long n)
{
    long long ans = LONG_LONG_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     vector<long long> temp;
    //     for (int j = i; j < n; j++)
    //     {
    //         temp.push_back(arr[j]);
    //         if (temp.size() != 1)
    //         {
    //             long long maxi = LONG_LONG_MIN, mini = LONG_LONG_MAX;
    //             for (auto it : temp)
    //             {
    //                 maxi = max(maxi, it);
    //                 mini = min(mini, it);
    //             }
    //             ans = max(ans,(maxi+mini));
    //         }
    //     }
    // }
    // return ans;
    for(long long i = 0;i< n-1;i++){
        ans = max(ans,arr[i]+arr[i+1]);
    }
    return ans;
}
int main()
{
    long long arr[5] = {5, 4, 3, 1, 6};
    cout<<pairWithMaxSum(arr,5);
    cout << endl;
    return 0;
}
