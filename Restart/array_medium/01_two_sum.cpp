// given an array and an integer target, find the indices of two elements such that those elements add up to hte target
#include <bits/stdc++.h>
using namespace std;
vector<int> two_sum(vector<int> &arr, int target)
{
    int n = arr.size();
    // vector<int> ans;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == target)
    //         {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //         }
    //     }
    // }
    // return ans;
    unordered_map<int, int> mpp;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int rem = target - arr[i];
        if (mpp.find(rem) != mpp.end())
        {
            ans.push_back(mpp[rem]);
            ans.push_back(i);
        }
        if(mpp.find(rem)==mpp.end())
        {
            mpp[arr[i]] = i;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {2, 7, 4, 9, 6, 3};
    vector<int> ans = two_sum(arr, 16);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}