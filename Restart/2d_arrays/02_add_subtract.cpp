#include <bits/stdc++.h>
using namespace std;
void sum(int arr1[3][3], int arr2[3][3])
{
    int ans[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
void sub(int arr1[3][3], int arr2[3][3])
{
    int ans[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
void matrix_add(int arr1[][3], int arr2[][3], int row1, int row2, int col1, int col2)
{
    if (row1 == row2 && col1 == col2)
    {
        int ans[3][3];
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                ans[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Addition is not possible \n";
        return;
    }
}
int main()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{7, 8, 9}, {4, 5, 6}, {1, 2, 3}};
    matrix_add(arr1, arr2, 3, 3, 3, 3);
    cout << endl;
    return 0;
}
