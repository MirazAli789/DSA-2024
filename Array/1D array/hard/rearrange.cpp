// rearrange the array in alternative positive and negative order
#include <bits/stdc++.h>
using namespace std;
vector<int> rearrange(vector<int> &arr)
{
    int n = arr.size();
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg.push_back(arr[i]);
        }
        else
        {
            pos.push_back(arr[i]);
        }
    }
    int i = 0, j = 0, k = 0;
    // while (i < n)
    // {
    //     arr[i] = pos[j];
    //     i++;
    //     j++;
    //     arr[i] = neg[k];
    //     i++;
    //     k++;
    // }
    for(int i=0;i<n;i+=2){
        arr[i] = pos[j];
        j++;
    }
    for(int i=1;i<n;i+=2){
        arr[i]=neg[k];
        k++;
    }
    return arr;
}
vector<int> rearrange_better(vector<int> &arr)
{
    int n = arr.size();
    int i = 0, j = 1;
    while (i < n && j < n)
    {
        if (arr[i] > 0)
        {
            i += 2;
        }
        else if (arr[j] < 0)
        {
            j += 2;
        }
        else if (arr[i] < 0)
        {
            for (int k = i + 1; k < n; k++)
            {
                if (arr[k] < 0)
                {
                    swap(arr[k], arr[i]);
                    break;
                }
            }
            i += 2;
        }
        else if (arr[j] > 0)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[k] > 0)
                {
                    swap(arr[k], arr[j]);
                    break;
                }
            }
            j += 2;
        }
    }
    return arr;
}
vector<int>rearrange_optimal(vector<int>&arr){
    int n=arr.size();
    vector<int>ans(n);
    int k=0,l=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[k]=arr[i];
            k+=2;
        }
        else{
            ans[l]=arr[i];
            l+=2;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr(6);
    arr = {-1, -3, 7, 5, -4, 9};
    vector<int> ans;
    ans = rearrange_optimal(arr);
    for (auto it : ans)
    {
        cout << (it) << " ";
    }
    cout << endl;
    return 0;
}
