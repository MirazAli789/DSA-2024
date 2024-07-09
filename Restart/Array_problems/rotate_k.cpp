#include<bits/stdc++.h>
using namespace std;
void rotate_k(vector<int> &arr,int k){
    int n = arr.size();
    vector<int>temp;
    for(int i = n-k;i<n;i++){
        temp.push_back(arr[i]);
    }
    for(int i = n-1;i>=1;i--){
        arr[i] = arr[i-k];
    }
    int j = 0;
    for(int i =0;i<k;i++){
        arr[i] = temp[j];
        j+=1;
    }
}
int main()
{
    vector<int>arr = {1,2,3,4,5,6,7};
    rotate_k(arr,2);
    for(auto it:arr){  
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}