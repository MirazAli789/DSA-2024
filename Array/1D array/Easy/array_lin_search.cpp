#include<bits/stdc++.h>
using namespace std;
bool linear(int arr[],int key,int n){
    for(int i = 0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[5] = {31,325,65,464,5432};

    if(linear(arr,87897,5)){
        cout<<"element present";
    }
    else{
        cout<<"Element not present";
    }
    cout<<"hello world";
    cout<<endl;
    return 0;
}