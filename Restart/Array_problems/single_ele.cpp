// in a given array every element appears twice, except one element
// find that element which appears once
#include <bits/stdc++.h>
using namespace std;
int single_element(vector<int> arr)
{
    // int n = arr.size();
    // int ans = 0;
    // for(auto it:arr){
    //     ans^=it;
    // }
    // return ans;
    int ans;
    int n = arr.size();
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    vector<int> hash(maxi + 1, 0);
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[i] == 1)
        {
            ans = i;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4};
    cout << single_element(arr);
    cout << endl;
    return 0;
}