#include <bits/stdc++.h>
using namespace std;
int max_subarray_sum(int arr[], int n)
{
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}
void max_sub_sum(int arr[], int n)
{
    int max_sum = INT_MIN;
    int sum = 0;
    int start, ans_s = -1, ans_e = -1;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }

        if (sum > max_sum)
        {
            max_sum = sum;
            ans_s = start;
            ans_e = i;
        }
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
    }
    for (int i = ans_s; i < ans_e; i++)
    {
        cout << arr[i]<<" ";
    }
    // return max_sum;
}
int main()
{
    int arr[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    max_sub_sum(arr, 9);
    cout << endl;
    return 0;
}
