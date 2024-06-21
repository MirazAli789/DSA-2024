// find the longest consecutive sequence
// arr = {2,8,6,4,7,3,4,1,23,634,123};
#include <bits/stdc++.h>
using namespace std;
bool ls(vector<int> arr, int k, int i)
{
    int n = arr.size();
    if (i == n)
    {
        return 0;
    }
    if (arr[i] == k)
    {
        return 1;
    }
    return ls(arr, k, i + 1);
}
int lcs(vector<int> arr)
{
    int n = arr.size();
    int lcs = 1;
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        int cnt = 1;
        while (ls(arr, x + 1, 0) == 1)
        {
            cnt++;
            lcs = max(lcs, cnt);
            x = x + 1;
        }
    }
    return lcs;
}
int lcs_better(vector<int> arr)
{
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int lcs = 1, cnt = 0, last = INT_MIN;
    int i = 0;
    while (i < n)
    {
        if (last + 1 == arr[i])
        {
            cnt++;
            lcs = max(lcs, cnt);
        }
        else
        {
            cnt = 1;
        }
        last = max(last, arr[i]);
        i++;
    }
    return lcs;
}
int main()
{
    vector<int> arr(5);
    arr = {0,1,2,3,4};
    cout << lcs_better(arr);
    cout << endl;
    return 0;
}
