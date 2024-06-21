#include <bits/stdc++.h>
using namespace std;
int unique(int arr[], int n)
{
    int i=0,j=0;
    while(j<n){
        if(arr[i]==arr[j]){
            j++;
        }
        else{
            arr[i+1]=arr[j];
            j++;
            i++;
        }
    }
    return (i+1);
}
int main()
{
    int arr[5] = {1, 1, 4, 4, 4};
    cout << unique(arr, 5);
    cout << endl;
    return 0;
}
