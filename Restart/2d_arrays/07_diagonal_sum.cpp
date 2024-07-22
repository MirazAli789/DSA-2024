#include <bits/stdc++.h>
using namespace std;
pair<int, int> diagonal_sum(int arr[][3], int row, int col)
{
    int left_sum = 0;
    int right_sum = 0;
    pair<int, int> ans;
    for (int i = 0; i < row; i++)
    {
        left_sum += arr[i][i];
    }
    // int i = 0, j = col - 1;
    // while (i < row && j >= 0)
    // {
    //     right_sum += arr[i][j];
    //     i++;
    //     j--;
    // }
    for (int i = 0; i < row; i++)
    {
        right_sum += arr[i][col - i - 1];
    }
    ans = make_pair(left_sum, right_sum);
    return ans;
}
int main()
{
    int arr[3][3] = {{7, 2, 1}, {8, 9, 3}, {1, 2, 4}};
    pair<int, int> ans = diagonal_sum(arr, 3, 3);
    cout << ans.first << " " << ans.second;
    cout << endl;
    return 0;
}
