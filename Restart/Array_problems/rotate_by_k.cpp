#include <bits/stdc++.h>
using namespace std;
vector<int> rotate_by_k(vector<int> arr, int k)
{
    int n = arr.size();
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[(i + k) % n] = arr[i];
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> ans = rotate_by_k(arr, 3);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}