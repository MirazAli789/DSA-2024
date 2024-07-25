// set matrix zero problem
#include <bits/stdc++.h>
using namespace std;
void set_matrix_zero(int arr[][4], int row, int col)
{
    vector<int> row_ind(row, 0);
    vector<int> col_ind(col, 0);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                row_ind[i] = 1;
                col_ind[j] = 1;
            }
        }
    }
    // for (int i = 0; i < row_ind.size(); i++)
    // {
    //     if (row_ind[i] == 1)
    //     {
    //         for (int j = 0; j < col; j++)
    //         {
    //             arr[i][j] = 0;
    //         }
    //     }
    // }
    // for (int i = 0; i < col_ind.size(); i++)
    // {
    //     if (col_ind[i] == 1)
    //     {
    //         for (int j = 0; j < row; j++)
    //         {
    //             arr[j][i] = 0;
    //         }
    //     }
    // }
    for (int i = 0; i < row_ind.size(); i++)
    {
        for (int j = 0; j < col_ind.size(); j++)
        {
            if (row_ind[i] == 1 || col_ind[j] == 1)
            {
                arr[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[4][4] = {{1, 1, 1, 1}, {1, 0, 0, 1}, {1, 1, 0, 1}, {1, 1, 1, 1}};
    set_matrix_zero(arr, 4, 4);
    cout << endl;
    return 0;
}
