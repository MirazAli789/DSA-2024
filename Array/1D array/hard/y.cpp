#include <bits/stdc++.h>
using namespace std;
bool ls(vector<int> arr, int k)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == k)
        {
            return 1;
        }
    }
    return 0;
}
int lcs(vector<int> arr)
{
    int n = arr.size(), lcs = 1;
    if (n == 0)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        int cnt=1,x=arr[i];
        while(ls(arr,x+1)){
            cnt++;
            lcs=max(lcs,cnt);
            x+=1;
        }
    }
    return lcs;
}
int main()
{
    vector<int>arr(5);
    arr = {3,0,2,1,4};
    cout<<lcs(arr);
    cout << endl;
    return 0;
}
