// left rotate array by one place
//  {1,2,3,4,5} => {2,3,4,5,1}
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &arr, int n)
{
    int key = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = key;
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    rotate(arr, arr.size());
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    return 0;
}
