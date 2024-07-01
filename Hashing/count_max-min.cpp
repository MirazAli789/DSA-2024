// given an array, find the max and min occuring element
#include <bits/stdc++.h>
using namespace std;
pair<int, int> max_min(int arr[], int n)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int maxi = INT_MIN, mini = INT_MAX;
    for (auto it : mpp)
    {
        maxi = max(maxi, it.second);
        mini = min(mini, it.second);
    }
    int max_occ, min_occ;
    for (auto it : mpp)
    {
        if (it.second == maxi)
        {
            max_occ = it.first;
            break;
        }
    }
    for (auto it : mpp)
    {
        if (it.second == mini)
        {
            min_occ = it.first;
            break;
        }
    }
    pair<int, int> p;
    p = make_pair(max_occ, min_occ);
    return p;
}
int main()
{
    int arr[6] = {1, 1, 1, 1, 3, 3};
    pair<int, int> ans = max_min(arr, 6);
    cout << ans.first << " " << ans.second;
    cout << endl;
    return 0;
}