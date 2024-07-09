// remove duplicates from a sorted array
#include <bits/stdc++.h>
using namespace std;
int remove_duplicates(vector<int> &arr)
{
    int n = arr.size();
    int i = 0, j = 1;
    while (j < n)
    {
        if (arr[i] == arr[j])
        {
            j++;
        }
        else
        {
            arr[i + 1] = arr[j];
            i++;
            j++;
        }
    }
    return i + 1; // it will return the number of unique elements
}
int main()
{
    vector<int>arr = {1,1,1,1,2,2,2,2,2,2,2,3,3,3,3,3,};
    cout<<remove_duplicates(arr)<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }

    cout << endl;
    return 0;
}