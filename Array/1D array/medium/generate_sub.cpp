// generate all subarrays
// subarray = contiguous part of the array
#include <bits/stdc++.h>
using namespace std;
void generate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    generate(arr, 5);
    cout << endl;
    return 0;
}
