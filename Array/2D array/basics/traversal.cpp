#include <bits/stdc++.h>
using namespace std;
void traverse_row(int arr[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void traverse_col(int arr[2][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<arr[j][i]<<" ";
        }
        // cout<<endl;
    }
}
int main()
{
    int arr[2][3] = {{1, 2, 3},
                     {4, 5, 6}};
    traverse_col(arr);
    cout << endl;
    return 0;
}
