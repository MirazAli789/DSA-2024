// number of subarrays having the sum equal to k
#include <bits/stdc++.h>
using namespace std;
int count_sum_brute(vector<int> arr, int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                count += 1;
            }
        }
    }
    return count;
}
int count_sum_optimal(vector<int> arr, int n, int k)
{
    int prefix = 0, cnt = 0;
    map<int, int> mpp;
    mpp[0]=1;
    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        int rem = prefix - k;
        cnt += mpp[rem];
        mpp[prefix] += 1;
    }
    return cnt;
}
int main()
{
    vector<int> arr = {1, 3, 2, 2, 5, -1};
    cout << count_sum_optimal(arr, arr.size(), 4);
    cout << endl;
    return 0;
}
