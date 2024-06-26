#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> transpoze(vector<vector<int>> arr)
{
    int row = arr.size(), col = arr[0].size();
    vector<vector<int>> ans(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[i][j] = arr[j][i];
        }
    }
    return ans;
}
vector<vector<int>> transpoze_optimal(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    for (int i = 0; i < (row - 1); i++)
    {
        for (int j = (i + 1); j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    return arr;
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    vector<vector<int>> ans;
    ans = transpoze_optimal(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
