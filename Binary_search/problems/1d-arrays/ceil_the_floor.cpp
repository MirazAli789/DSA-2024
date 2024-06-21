// given an array, and an integer x.Find the ceil and floor value of x
/*Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.
Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.*/
#include <bits/stdc++.h>
using namespace std;
pair<int, int> floor_ceil_brute(vector<int> arr, int x, int n)
{
    pair<int, int> ans;
    int floor = -1, ceil = INT_MAX;
    // finding the floor
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= x)
        {
            floor = max(floor, arr[i]);
        }
        else if (arr[i] >= x)
        {
            ceil = min(ceil, arr[i]);
        }
    }
    // finding the ceiling
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] >= x)
    //     {
    //         ceil = min(ceil, arr[i]);
    //     }
    // }
    ans.first = floor;
    ans.second = ceil;
    return ans;
}
int main()
{
    pair<int, int> ans;
    vector<int> arr = {3, 4, 7, 8, 8, 10};
    int n = arr.size();
    ans = floor_ceil_brute(arr, 3, n);
    cout << ans.first << endl
         << ans.second;
    cout << endl;
    return 0;
}
