// given an array, try to reverse it
#include <bits/stdc++.h>
using namespace std;
void rev1(vector<int> &arr1)
{
    vector<int> arr2(arr1.size());
    int i = 0, j = arr1.size() - 1;
    for (; i < arr1.size(); i++)
    {
        arr2[i] = arr1[j];
        j--;
    }
    arr1 = arr2;
}
void rev2(vector<int> &arr)
{
    int n = arr.size();
    int start = 0, end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void rev3(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < (n / 2); i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}
int main()
{
    vector<int> arr(5);
    arr = {32, 234, 5435, 34, 67};
    rev3(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
