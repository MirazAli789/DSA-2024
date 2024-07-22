#include <bits/stdc++.h>
using namespace std;
void traverse_columnwise(int arr[4][3], int row, int col)
{
    // in every iteration the coloumn reamins constant and the row is variable
    //  arr[i][col]
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout<<endl;
    }
    // for(int i = 0;i<row;i++){
    //     for(int j = 0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }
}
int main()
{
    int arr[4][3] = {{2, 7, 4}, {5, 6, 11}, {23, 1, 12}, {6, 17, 31}};
    traverse_columnwise(arr,4,3);
    cout << endl;
    return 0;
}
