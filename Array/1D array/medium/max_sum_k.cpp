// maximum subarray with given sum k
#include <bits/stdc++.h>
using namespace std;
int maxi_subarr(vector<int> arr, int n, int k)
{
    int len = -1;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}
int main()
{
    vector<int> arr(7);
    arr = {1, 2, 3, 1, 2, 1, 1};
    cout<<maxi_subarr(arr,7,4);
    cout << endl;
    return 0;
}
