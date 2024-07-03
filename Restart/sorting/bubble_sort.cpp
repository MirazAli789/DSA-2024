#include <bits/stdc++.h>
using namespace std;
void bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    bubble(arr, 5);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}