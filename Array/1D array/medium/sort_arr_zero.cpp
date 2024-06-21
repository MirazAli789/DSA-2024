#include <bits/stdc++.h>
using namespace std;
void sort_012_brute(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void sort_012_better(vector<int> &arr, int n)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt0++;
        }
        else if (arr[i] == 1)
        {
            cnt1++;
        }
        else if (arr[i] == 2)
        {
            cnt2++;
        }
    }
    for (int i = 0; i < cnt0; i++)
    {
        arr[i] = 0;
    }
    for (int i = cnt0; i < (cnt0 + cnt1); i++)
    {
        arr[i] = 1;
    }
    for (int i = (cnt0 + cnt1); i < n; i++)
    {
        arr[i] = 2;
    }
}
void sort_012_optimal(vector<int> &arr, int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    vector<int> arr(7);
    arr = {2, 0, 1, 2, 1, 0, 1};
    sort_012_optimal(arr, 7);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
