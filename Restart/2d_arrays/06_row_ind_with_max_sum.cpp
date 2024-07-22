#include <bits/stdc++.h>
using namespace std;
int row_index_with_max_sum(int arr[][3], int row, int col)
{
    int max_sum = INT_MIN, ind = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max_sum)
        {
            max_sum = sum;
            ind = i;
        }
    }
    return ind;
}
int main()
{
    int arr[3][3] = {{7, 2, 1}, {8, 9, 3}, {1, 2, 4}};
    cout<<row_index_with_max_sum(arr,3,3);
    
    cout << endl;
    return 0;
}
