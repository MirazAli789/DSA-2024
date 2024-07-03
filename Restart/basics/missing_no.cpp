// given abn integer N and an array of size N-1, elements in that array are present in the range of 1 to N find the missing number
//  1<=arr[i]<=N (size of array = N-1)
#include <bits/stdc++.h>
using namespace std;
int missing_no(int arr[], int N)
{
    int ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < N - 1; i++)
    {
        mp[arr[i]]++;
    }
    for (int i = 1; i <= N; i++)
    {
        if (mp[i] == 0)
        {
            ans = i;
        }
    }
    return ans;
}
int mn2(int arr[], int N)
{
    int sum1 = (N * (N + 1)) / 2;
    int sum2 = 0;
    for (int i = 0; i < N - 1; i++)
    {
        sum2 += arr[i];
    }
    return (sum1-sum2);
}
int main()
{
    int arr[4] = {2, 3, 4, 5};
    cout << mn2(arr, 5);
    cout << endl;
    return 0;
}