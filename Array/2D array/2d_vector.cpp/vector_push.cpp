#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    vector<vector<int>> arr;
    // adding rows
    arr.push_back({1, 2, 3});
    arr.push_back({4, 5, 6});
    arr.push_back({7, 8, 9});
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // adding coloumn
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i].push_back(i + 1);
    }
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
