// given a 2d matrix, rotate by 90 degrees clockwise
#include <bits/stdc++.h>
using namespace std;
void rotate_matrix_brute(vector<vector<int>> &arr)
{
    int row = arr.size(), col = arr[0].size();
    vector<vector<int>> ans(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[j][col - i - 1] = arr[i][j];
        }
    }
    arr = ans;
}
void transpoze_matrix(vector<vector<int>>&arr){
    int row = arr.size(), col = arr[0].size();
    for(int i=0;i<(row-1);i++){
        for(int j=i+1;j<col;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}
void reverse_rowwise(vector<vector<int>> &arr){
    int row = arr.size(), col = arr[0].size();
    for(int i=0;i<row;i++){
        int start=0,end=col-1;
        while(start<end)
        {
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
}
void rotate_matrix_better(vector<vector<int>> &arr)
{
    int row = arr.size(), col = arr[0].size();
    //transpoze_matrix;
    transpoze_matrix(arr);
    //reverse each row
    reverse_rowwise(arr);
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate_matrix_better(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
