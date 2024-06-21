#include <bits/stdc++.h>
using namespace std;
int dupli(int arr[], int n)
{
    map<int, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] == 0)
        {
            mp[arr[i]]++;
        }
    }
    for (auto it : mp)
    {
        count++;
    }
    return count;
}
int dup(int arr[], int n)
{
    int i = 0, j = 0;
    while (j < n)
    {
        if (arr[i] == arr[j])
        {
            j++;
        }
        else
        {
            arr[i + 1] = arr[j];
            i++;
            j++;
        }
    }
    return (i + 1);
}
int main()
{
    int arr[5] = {1, 1, 1, 1, 1};
    cout << dup(arr, 5);
    cout << endl;
    return 0;
}
