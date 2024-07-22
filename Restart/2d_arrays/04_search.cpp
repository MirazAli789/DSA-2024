#include <bits/stdc++.h>
using namespace std;
pair<int, int> search_ele(int arr[4][3], int X)
{
    pair<int, int> ans;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == X)
            {
                ans = make_pair(i, j);
            }
        }
    }
    return ans;
}
int main()
{
    int arr[4][3] = {{2, 7, 4}, {5, 6, 11}, {23, 1, 12}, {6, 17, 31}};
    pair<int, int> ans = search_ele(arr, 23);
    cout << ans.first << " " << ans.second;
    cout << endl;
    return 0;
}
