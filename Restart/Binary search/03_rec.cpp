#include <bits/stdc++.h>
using namespace std;
int bin_search(int arr[], int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;
    if (arr[mid] == key)
        return mid;

    else if (arr[mid] > key)
        return bin_search(arr, low, mid - 1, key);

    else
        return bin_search(arr, mid + 1, high, key);
}
int main()

{
    int arr[6] = {2, 5, 8, 13, 17, 20};
    cout << bin_search(arr, 0, 5, 17);
    cout << endl;
    return 0;
}
