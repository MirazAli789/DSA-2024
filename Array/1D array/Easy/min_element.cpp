#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {4,2,3,-1,17};
    // int mini = INT_MAX;
    // for(int i=0;i<5;i++){
    //     if(arr[i]<mini){
    //         mini = arr[i];
    //     }
    // }
    // cout<<"Minimum element = "<<mini<<" ";
    // cout<<endl;

    int maxi = INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout<<"Maximum element = "<<maxi<<" ";
    cout<<endl;
    cout<<INT_MAX;

    return 0;
}