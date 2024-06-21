#include <bits/stdc++.h>
using namespace std;
vector<int> two_sum_brute(vector<int> arr, int n, int target)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}
vector<int> two_sum_better(vector<int> arr, int n, int target)
{
    vector<int> ans;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int rem = target - arr[i];
        if (mpp.find(rem) != mpp.end())
        {
            ans.push_back(mpp[rem]);
            ans.push_back(i);
        }
        mpp[arr[i]] = i;
    }
    return ans;
}
vector<int> two_sum_optimal(vector<int> arr, int n, int target)
{
    vector<int> ans;
    sort(arr.begin(), arr.end());
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if ((arr[i] + arr[j]) == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if ((arr[i] + arr[j]) > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {};
}
int main()
{
    vector<int> arr(4);
    arr = {1, 2, 1, 3};
    vector<int> ans;
    ans = two_sum_optimal(arr, 4, 3);
    for (auto it : ans)
    {
        cout << (it) << " ";
    }
    cout << endl;
    return 0;
}
