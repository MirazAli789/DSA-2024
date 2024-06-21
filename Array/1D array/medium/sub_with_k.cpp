// find the length of the maximum subarray having sum = k
#include <bits/stdc++.h>
using namespace std;
// int sub_k_brute(int arr[], int n, int k)
// {
//     int maxi = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }
//             if (sum == k)
//             {
//                 maxi = max(maxi, (j - i + 1));
//             }
//         }
//     }
//     return maxi;
// }
// int sub_with_k_better(int arr[], int n, int k)
// {
//     int maxi = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             if (sum == k)
//             {
//                 maxi = max(maxi, j - i + 1);
//             }
//         }
//     }
//     return maxi;
// }
int sub_k_optimal(int arr[], int n, int k)
{
    int len = 0;
    int i = 0, j = 0;
    int sum = arr[0];
    while (j < n)
    {
        while (i <= j && sum > k)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == k)
        {
            len = max(len, j - i + 1);
        }
        j++;
        if (j < n)
        {
            sum += arr[j];
        }
    }
    return len;
}
int main()
{
    int arr[5] = {1, 1, 2, 1, 3};
    cout << sub_k_optimal(arr, 5, 3);
    cout << endl;
    return 0;
}
