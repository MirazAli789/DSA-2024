#include<bits/stdc++.h>
using namespace std;
int missing(int arr[],int n,int k){
    int sumn=0,suma=0;
    for(int i=1;i<=n;i++)
    sumn+=i;

    for(int i=0;i<k;i++)
    suma+=arr[i];

    return (sumn-suma);
}
int miss(int arr[],int n,int k){
    int key;
    for(int i=0;i<k;i++){
        key=i+1;
        if(i==k-1)
        return (k+1);


        if(arr[i]!=key)
        return key;

    }
}
int main()
{
    // N is given, with an array of size N-1
    //find the missing number in sequence

    int arr[5] = {1,2,3,5,6};
    cout<<miss(arr,6,5);
    cout<<endl;
    return 0;
}