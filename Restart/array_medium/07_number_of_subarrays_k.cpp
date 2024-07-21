// given an array and an integer k, find the no. of subarrays having the sum equals to k

#include <bits/stdc++.h>
using namespace std;
int number_sum_k(int arr[], int k, int n)
{
    unordered_map<int, int> mpp;
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            count++;
        }
        int rem = sum - k;
        if (mpp.find(rem) != mpp.end())
        {
            count += mpp[rem];
        }
        mpp[sum]++;
    }
    return count;
}
int main()
{
    int arr[5] = {1, 7, 3, 4, 6};
    cout << number_sum_k(arr, 7, 5);
    cout << endl;
    return 0;
}
