#include <bits/stdc++.h>
using namespace std;
vector<int> union_of_array(int arr1[], int arr2[], int n, int m)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (find(ans.begin(), ans.end(), arr1[i]) != ans.end())
            {
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (find(ans.begin(), ans.end(), arr2[j]) != ans.end())
            {
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n)
    {
        if (find(ans.begin(), ans.end(), arr1[i]) != ans.end())
        {
            ans.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (find(ans.begin(), ans.end(), arr2[j]) != ans.end())
        {
            ans.push_back(arr2[j]);
        }
        j++;
    }
    return ans;
}
int main()
{


    cout << endl;
    return 0;
}