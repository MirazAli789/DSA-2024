#include <bits/stdc++.h>
using namespace std;
void set_matrix_brute(vector<vector<int>> &arr)
{
    int row = arr.size(), col = arr[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                for (int k = 0; k < col; k++)
                {
                    if (arr[i][k] == 0)
                    {
                        continue;
                    }

                    else
                        arr[i][k] = -1;
                }
                for (int k = 0; k < row; k++)
                {
                    if (arr[k][j] == 0)
                    {
                        continue;
                    }

                    else
                        arr[k][j] = -1;
                }
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }
}
void set_matrix_better(vector<vector<int>> &arr)
{
    int row = arr.size(), col = arr[0].size();
    set<int> ro;
    set<int> co;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                ro.insert(i);
                co.insert(j);
            }
        }
    }
    for (auto it : ro)
    {
        for (int k = 0; k < col; k++)
        {
            arr[it][k] = 0;
        }
    }
    for (auto it : co)
    {
        for (int k = 0; k < row; k++)
        {
            arr[k][it] = 0;
        }
    }
}
void set_matrix_optimal(vector<vector<int>> &arr)
{
    int n = arr.size(), m = arr[0].size();
    vector<int> row(n, 0);
    vector<int> col(m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    // for (int it = 0; it < row.size(); it++)
    // {
    //     if (row[it] == 1)
    //     {
    //         for (int k = 0; k < m; k++)
    //         {
    //             arr[it][k] = 0;
    //         }
    //     }
    // }
    // for (int it = 0; it < col.size(); it++)
    // {
    //     if (col[it] == 1)
    //     {
    //         for (int k = 0; k < n; k++)
    //         {
    //             arr[k][it] = 0;
    //         }
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                arr[i][j] = 0;
            }
        }
    }
}
int main()
{
    vector<vector<int>> arr = {{1, 1, 1, 1}, {1, 0, 0, 1}, {1, 1, 0, 1}, {1, 1, 1, 1}};
    set_matrix_optimal(arr);
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
