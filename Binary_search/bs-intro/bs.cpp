#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> arr, int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // Correct calculation of mid
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            // go to left
            high = mid - 1;
        }
        else
        {
            // go to right
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {6, 17, 18, 20, 31, 56, 58};
    cout << bs(arr, arr.size(), 31) << endl;
    return 0;
}
