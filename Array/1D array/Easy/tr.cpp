#include <bits/stdc++.h>
using namespace std;
void move_zero(vector<int> &arr, int n)
{
    int j, k;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (k = j + 1; k < n; k++)
    {
        if (arr[k] != 0)
        {
            swap(arr[j], arr[k]);
            j++;
        }
    }
}
int main()
{
    vector<int> arr(6);
    arr = {1, 0, 5, 0, 3, 4};
    move_zero(arr, arr.size());
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    return 0;
}
