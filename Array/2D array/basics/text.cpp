#include <bits/stdc++.h>
using namespace std;
vector<int> diagonal(int arr[][3], int row, int col)
{
    vector<int> ans;
    int sum1 = 0, sum2 = 0, i = 0, j = col - 1;
    // left diagonal sum
    for (int i = 0; i < row; i++)
    {
        sum1 += arr[i][i];
    }
    // right diagonal sum
    while (j >= 0)
    {
        sum2 += arr[i][j];
        i++;
        j--;
    }
    ans.push_back(sum1);
    ans.push_back(sum2);
    return ans;
}
int main()
{
    int arr[3][3] = {2, 3, 7, 1, 4, 6, 9, 8, 0};
    vector<int> ans;
    ans = diagonal(arr, 3, 3);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
