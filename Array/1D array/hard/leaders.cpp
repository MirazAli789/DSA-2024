// find the leaders present in an array
//  arr = {1,2,2,3,2,3};
//  ans = {3}
#include <bits/stdc++.h>
using namespace std;
vector<int> leaders_brute(vector<int> arr)
{
    int n = arr.size();
    set<int> st;
    st.insert(arr[n - 1]);
    for (int i = 0; i < n - 1; i++)
    {
        bool big = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                big = 0;
            }
        }
        if (big == 1)
        {
            st.insert(arr[i]);
        }
    }
    vector<int> ans;
    for (auto it : st)
    {
        ans.push_back(it);
    }
    return ans;
}
vector<int> leaders_optimal(vector<int> &arr)
{
    int n = arr.size();
    set<int> st;
    int maxi = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            st.insert(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
    arr.clear();
    for(auto it:st){
        arr.push_back(it);
    }
    return arr;
}
int main()
{
    vector<int> arr(3);
    arr = {5,4,3};
    vector<int> ans;
    ans = leaders_optimal(arr);
    for (auto it : ans)
    {
        cout << (it) << " ";
    }
    cout << endl;
    return 0;
}
