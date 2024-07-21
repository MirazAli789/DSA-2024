#include <bits/stdc++.h>
using namespace std;
vector<int> leadera_in_array(int arr[], int n)
{
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] >= arr[i])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            ans.push_back(arr[i]);
        }
    }
    ans.push_back(arr[n - 1]);
    return ans;
}
int main()
{
    int arr[4] = {1,2,2,1};
    vector<int> ans = leadera_in_array(arr, 4);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
