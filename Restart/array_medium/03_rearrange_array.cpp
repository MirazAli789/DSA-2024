#include <bits/stdc++.h>
using namespace std;
void rearrange_arr(vector<int> &arr)
{
    int n = arr.size();
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        { // if the element is neagtive
            neg.push_back(arr[i]);
        }
        else
        {
            pos.push_back(arr[i]);
        }
    }
    int i = 0, j = 0;
    while (j < n)
    {
        arr[j] = pos[i];
        j += 2;
        i++;
    }
    i = 0, j = 1;
    while (j < n)
    {
        arr[j] = neg[i];
        j += 2;
        i++;
    }
    // return arr;
}
int main()
{
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    rearrange_arr(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
