#include <bits/stdc++.h>
using namespace std;
int largest(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int main()
{
    int arr[5] = {2, 13, 4, 134, 6};
    cout << largest(arr, 5);
    cout << endl;
    return 0;
}