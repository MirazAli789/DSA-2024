// move zeroes to the end
//  {1,2,0,0,4} ==> {1,2,4,0,0}
//  {1,3,4,0,5,0,6} ==> {1,3,4,5,6,0,0}
#include <bits/stdc++.h>
using namespace std;
void move_zero_brute(vector<int> &arr, int n)
{
    //step:1 storing the non zero elements
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }

    //step:2 paste all the non zero elements into the main array
    int j = 0;
    int k = temp.size();
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[j];
        j++;
    }

    //step:3 place zeroes after the non zero elements
    for (int i = k; i < n; i++)
    {
        arr[i] = 0;
    }
}
void move_zero_better(vector<int> &arr, int n)
{
    // int k=-1,l=-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0){
    //         l = i;
    //         k = i+1;
    //         break;
    //     }
    // }
    // while(k<n){
    //     if(arr[k]!=0){
    //         swap(arr[l],arr[k]);
    //         k++;
    //         l++;
    //     }
    //     else{
    //         k++;
    //     }
    // }
    int k, l;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            l = i;
            break;
        }
    }
    for (int k = l + 1; k < n; k++)
    {
        if (arr[k] != 0)
        {
            swap(arr[k], arr[l]);
            l++;
        }
    }
}
int main()
{
    vector<int> arr(7);
    arr = {1, 2, 0, 3, 0, 0, 6};
    move_zero_better(arr, arr.size());
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << (*it) << " ";
    }

    cout << endl;
    return 0;
}
