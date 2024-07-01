// given an array find the occurence of a particular number
#include <bits/stdc++.h>
using namespace std;

int freq_brute(int arr[], int key, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            cnt++;
    }
    return cnt;
}
int freq_better(int arr[], int key, int maxi, int n)
{
    int hash[maxi + 1] = {0};
    // precomputation
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    return hash[key];
}
int main()
{
    int arr[7] = {1, 2, 4, 1, 2, 2, 4};
    cout << freq_better(arr,4,4,7);

    cout << endl;
    return 0;
}