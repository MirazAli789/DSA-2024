// given an array, print all the permutations in a sorted array
#include <bits/stdc++.h>
using namespace std;
void rec_permute(vector<int> &arr, vector<vector<int>> &ans, int freq[], vector<int> &ds)
{
    // base condition
    int n = arr.size();
    if (ds.size() == n)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (freq[i]!=1)
        {
            ds.push_back(arr[i]);
            freq[i] = 1;
            rec_permute(arr, ans, freq, ds);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}
vector<vector<int>> print_permutation(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[n] = {0};
    rec_permute(arr, ans, freq, ds);
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans = print_permutation(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
