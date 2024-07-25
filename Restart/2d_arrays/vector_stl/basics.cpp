#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declarartion only:
    // vector<vector<int>> arr(3/*no of rows*/, vector<int>(4/*no. of cols*/));
    // cout << "Enter elements in the array\n";
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // declaration + initialization
    vector<vector<int>> arr1(3, vector<int>(3, 0));
    for(int i=0;i<arr1.size();i++)
    {
        for(int j = 0;j<arr1[i].size();j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << endl;
    return 0;
}
