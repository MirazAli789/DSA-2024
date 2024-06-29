// given an array search an element in that array
#include <bits/stdc++.h>
using namespace std;
int lin_search(int arr[], int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {53, 3214, 435, 34, 5};
    cout << lin_search(arr, 78, 5);
    cout << endl;
    return 0;
}
