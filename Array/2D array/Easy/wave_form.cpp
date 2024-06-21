#include <bits/stdc++.h>
using namespace std;
void wave_form(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();
    // reverse the alternating coloumns
    for (int i = 1; i < col; i += 2)
    {
        int k = 0, l = row - 1;
        while (k < l)
        {
            swap(arr[k][i], arr[l][i]);
            k++;
            l--;
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
    }
}
int main()
{
    vector<vector<int>>arr={{3,6,4,2},{7,8,11,5},{9,3,2,1},{17,8,5,9}};
    wave_form(arr);
    cout << endl;
    return 0;
}
