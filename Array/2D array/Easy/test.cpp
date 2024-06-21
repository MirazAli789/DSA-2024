#include <bits/stdc++.h>
using namespace std;
void wave_form(vector<vector<int>> arr)
{
    int row = arr.size(), col = arr[0].size();
    for (int j = 0; j < col; j++)
    {
        int i = 0;
        while (i < row)
        {
            cout << arr[i][j] << " ";
            i++;
        }
        j += 1;
        i = row - 1;
        while (i >= 0)
        {
            cout << arr[i][j] << " ";
            i--;
        }
    }
}
void wave_form_optimal(vector<vector<int>> arr)
{
    int row = arr.size(), col = arr[0].size();
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}
int main()
{
    vector<vector<int>> arr = {{2, 7, 5, 6}, {1, 3, 2, 9}, {4, 8, 6, 5}, {11, 2, 9, 4}};
    wave_form_optimal(arr);
    cout << endl;
    return 0;
}
