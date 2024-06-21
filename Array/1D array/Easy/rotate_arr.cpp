// 1 2 3 4 5 
// 5 1 2 3 4 //after rotation
#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int n){
    int k = arr[n-1];
    for(int i=n-1;i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0] = k;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    rotate(arr,5);

    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";


    cout<<endl;
    return 0;
}