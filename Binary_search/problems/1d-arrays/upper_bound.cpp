#include <bits/stdc++.h>
using namespace std;
int upper(vector<int> arr, int n, int x)
{
    int upper = n;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x)
        {
            upper = min(upper, mid);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return upper;
}
int main()
{
    vector<int> arr = {1, 5, 5, 7, 7, 9, 10};
    int n = arr.size();
    cout << upper(arr, n, 2);
    cout << endl;
    return 0;
}
