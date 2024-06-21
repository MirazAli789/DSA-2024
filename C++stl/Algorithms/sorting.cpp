#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {2, 1, 3, 5, 4};
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> v;
    v.push_back(2);
    v.push_back(45);
    v.push_back(13);
    v.push_back(24);
    sort(v.begin(), v.end());//
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    return 0;
}