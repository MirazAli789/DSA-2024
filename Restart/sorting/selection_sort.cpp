#include <bits/stdc++.h>
using namespace std;
void selection(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_ind = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        swap(arr[i], arr[min_ind]);
    }
}
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    selection(arr, 5);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}