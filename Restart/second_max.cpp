// given an array, find the seond max element in that array
#include <bits/stdc++.h>
using namespace std;
int second_max1(vector<int> &arr)
{
    int n = arr.size();
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max1 = max(max1, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max1)
        {
            max2 = max(max2, arr[i]);
        }
    }
    return max2;
}
int second_max2(vector<int> arr)
{
    int n = arr.size();
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 )
        {
            max2 = arr[i];
        }
    }
    return max2;
}
int main()
{
    vector<int> arr(5);
    arr = {66, 65, 76, 72, 69};
    cout << second_max2(arr);
    cout << endl;
    return 0;
}
