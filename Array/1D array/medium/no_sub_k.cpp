// find the number of subarrays having the sum = k
#include<bits/stdc++.h>
using namespace std;
int number_of_k(vector<int> arr, int n, int k) {
    int count = 0;
    int i = 0, j = 0;
    int sum = arr[0];
    
    while (j < n) {
        while (i <= j && sum > k) {
            sum -= arr[i];
            i++;
        }
        if (sum == k) {
            count++;
        }
        j++;
        if (j < n) {
            sum += arr[j];
        }
    }
    return count;
}

int main()
{
    vector<int>arr(6);
    arr = {1,1,1,2,3,5};
    cout<<number_of_k(arr,6,5);
    cout<<endl;
    return 0;
}
