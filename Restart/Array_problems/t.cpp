#include <bits/stdc++.h>
using namespace std;
void move_zero(vector<int> &arr)
{
    // brute approach
    // int n = arr.size();
    // vector<int> temp;
    // for (int i = 0; i < n; i++)
    // { 
    //     if (arr[i] != 0)
    //     {
    //         temp.push_back(arr[i]);
    //     }
    // }
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     arr[i] = temp[i];
    // }
    // for (int i = temp.size(); i < n; i++)
    // {
    //     arr[i] = 0;
    // }
    int n = arr.size();
    int i, j;
    for (int k = 0; k < n; k++)
    {
        if (arr[k] == 0)
        {
            j = k;
            i = k + 1;
            break;
        }
    }
    while (i<n){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
        i++;
    }
}
int main()
{
    vector<int> arr = {1, 2, 0, 0, 0, 3, 4, 0};
    arr.push_back(4);
    cout<<arr.back();
    move_zero(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}