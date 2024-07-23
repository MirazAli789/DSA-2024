#include <bits/stdc++.h>
using namespace std;
pair<int, int> diagonal_sum(int arr[3][3], int row, int col)
{
    int left_sum = 0, right_sum = 0;
    for (int i = 0; i < row; i++)
    {
        left_sum += arr[i][i];
    }
    for (int i = 0; i < row; i++)
    {
        right_sum += arr[i][col - i - 1];
    }
    pair<int, int> ans = make_pair(left_sum, right_sum);
    return ans;
}
void reverse_each_row(int (&arr)[3][3],int row,int col)
{
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<(col/2);j++)
        {
            swap(arr[i][j],arr[i][col-j-1]);
        }
    }

    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][3] = {{7, 2, 1}, {8, 9, 3}, {1, 2, 4}};
    // pair<int, int> ans = diagonal_sum(arr, 3, 3);
    // cout << ans.first << " " << ans.second;
    reverse_each_row(arr,3,3);
    
    cout << endl;
    return 0;
}
