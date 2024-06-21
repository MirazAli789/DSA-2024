#include <bits/stdc++.h>
using namespace std;
void add(int arr1[][3], int arr2[][3], int row, int col)
{
    int ans[row][col];
    // subtraction of two matrices
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j += 1)
        {
            ans[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    // print the resultant matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr1[2][3] = {6, 5, 4, 3, 2, 1};
    int arr2[2][3] = {1, 2, 3, 3, 1, 0};
    add(arr1,arr2,2,3);
    cout << endl;
    return 0;
}
