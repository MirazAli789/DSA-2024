// best time to sell and buy stock
#include <bits/stdc++.h>
using namespace std;
int best_time(vector<int> &arr)
{
    int n = arr.size();
    int profit = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        int mini = INT_MAX;
        for (int j = 0; j < i; j++)
        {
            mini = min(mini, arr[j]);
        }
        profit = max(profit, arr[i] - mini);
    }
    if (profit < 0)
    {
        profit = 0;
    }
    return profit;
}
int best_time_optimal(vector<int> arr)
{
    int n = arr.size();
    int mini = arr[0], profit = 0;
    for (int i = 1; i < n; i++)
    {
        profit = max(profit, arr[i] - mini);
        mini = min(mini, arr[i]);
    }
    return profit;
}
int main()
{
    vector<int> arr(6);
    arr = {2, 7, 1, 9, 6, 8};
    cout << best_time_optimal(arr);
    cout << endl;
    return 0;
}
