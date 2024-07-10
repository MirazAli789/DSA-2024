#include <bits/stdc++.h>
using namespace std;
vector<int> union_of_array(vector<int> arr1, vector<int> arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (ans.empty() || ans.back() != arr1[i])
            {
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (ans.empty() || ans.back() != arr2[j])
            {
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n)
    {
        if (ans.empty() || ans.back() != arr1[i])
        {
            ans.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (ans.empty() || ans.back() != arr2[j])
        {
            ans.push_back(arr2[j]);
        }
        j++;
    }
    return ans;
}
int main()
{

    vector<int> arr1 = {3, 4, 7, 7, 8, 8, 8};
    vector<int> arr2 = {1, 2, 2, 3, 3, 3};
    vector<int> ans = union_of_array(arr1, arr2);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}