#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter row,cols" << endl;
    cin >> row >> col;
    vector<vector<int>> arr(row, vector<int>(col));
    cout << "Enter vector" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout << endl;
    return 0;
}
