#include <bits/stdc++.h>
using namespace std;
int second_largest(int arr[], int n)
{
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    return max2;
}
int main()
{
    int arr[5] = {5,1,2,2,3};
    cout<<second_largest(arr,5);
    cout << endl;
    set<int>s;
    return 0;
}
