#include <bits/stdc++.h>
using namespace std;
void rotate_by_one(int arr[], int n)
{
    int key = arr[n - 1];
    for (int i = n - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = key;
}
int main()
{
    int arr[6] = {2, 7, 4, 11, 5, 8};
    rotate_by_one(arr, 6);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}