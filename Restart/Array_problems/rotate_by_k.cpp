#include <bits/stdc++.h>
using namespace std;
vector<int> rotate_by_k(vector<int> arr, int k)
{
    int n = arr.size();
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[(i + k) % n] = arr[i];
    }
}
int main()
{

    cout << endl;
    return 0;
}