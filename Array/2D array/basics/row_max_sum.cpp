// print row index with maximum sum
#include <bits/stdc++.h>
using namespace std;
int row_ind(int arr[][3], int row, int col)
{
    int maxsum = INT_MIN, ind = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxsum)
        {
            maxsum = sum;
            ind = i;
        }
    }
    return ind;
}
int main()
{
    int arr[4][3] = {4, 1, 2, 3, 7, 5, 9, 8, 11, 1, 1, 0};
    cout << row_ind(arr, 4, 3);
    cout << endl;
    return 0;
}
