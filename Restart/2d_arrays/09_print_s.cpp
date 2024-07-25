#include <bits/stdc++.h>
using namespace std;
void print_wave_form(int arr[3][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (i % 2 == 0)
        {
            //when the coloumn is even,printing from top to bottom
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            //when coloumn is odd print form bottom to top
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print_wave_form(arr,3,3);
    cout << endl;
    bool a = true;
    cout<< (-89%20);
    return 0;
}
