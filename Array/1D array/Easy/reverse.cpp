#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    for(int i=0;i<(n/2);i++){
        swap(arr[i],arr[n-i-1]);
    }
}
void rev(int arr[],int n){
    int i=0,j=(n-1);
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    reverse(arr,6);
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    rev(arr,6);
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
    return 0;
}