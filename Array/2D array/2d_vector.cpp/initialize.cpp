#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr ={
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};
    vector<vector<int>> arr1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int row = arr.size();
    int col = arr[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
