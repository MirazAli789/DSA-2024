// given a 2d matrix, print the elements in the matrix in spiral order
#include <bits/stdc++.h>
using namespace std;
vector<int> print_spiral(vector<vector<int>> &arr)
{
    vector<int> ans;
    int row = arr.size();
    int col = arr[0].size();
    int left = 0, right = col - 1, top = 0, bottom = row - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(arr[top][i]);
        }
        top += 1;
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(arr[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }
    return ans;
}
// vector<int> print_spiral(vector<vector<int>> &arr)
// {
//     vector<int> ans;
//     int row = arr.size();
//     if (row == 0)
//         return ans; // Handling empty input array
//     int col = arr[0].size();
//     int left = 0, right = col - 1, top = 0, bottom = row - 1;

//     while (left <= right && top <= bottom) // Adjusted loop condition
//     {
//         // Traverse top row
//         for (int i = left; i <= right; i++)
//         {
//             ans.push_back(arr[top][i]);
//         }
//         top++;

//         // Traverse right column
//         for (int i = top; i <= bottom; i++)
//         {
//             ans.push_back(arr[i][right]);
//         }
//         right--;

//         // Traverse bottom row
//         if (top <= bottom) // Check if top hasn't crossed bottom
//         {
//             for (int i = right; i >= left; i--)
//             {
//                 ans.push_back(arr[bottom][i]);
//             }
//             bottom--;
//         }

//         // Traverse left column
//         if (left <= right) // Check if left hasn't crossed right
//         {
//             for (int i = bottom; i >= top; i--)
//             {
//                 ans.push_back(arr[i][left]);
//             }
//             left++;
//         }
//     }

//     return ans;
// }

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<vector<int>> arr1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> ans;
    ans = print_spiral(arr1);
    for (auto it : ans)
    {
        cout << (it) << " ";
    }
    cout << endl;
    return 0;
}
