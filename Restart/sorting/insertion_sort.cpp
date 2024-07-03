// In every iteration we take an element to its correct position

#include <bits/stdc++.h>
using namespace std;
void insertion(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
        }
    }
}
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    insertion(arr, 5);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}