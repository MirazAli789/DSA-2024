#include <bits/stdc++.h>
using namespace std;
void reverse_row(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < (col / 2); j++)
        {
            swap(arr[i][j], arr[i][col - j - 1]);
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
void rev(int (&arr)[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int k = 0, l = col - 1;
        while (k < l)
        {
            swap(arr[i][k], arr[i][l]);
            k++;
            l--;
        }
    }
}
int main()
{
    int arr[3][3] = {2, 3, 7, 5, 4, 9, 1, 2, 3};
    rev(arr, 3, 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
