#include<bits/stdc++.h>
using namespace std;
bool is_sorted(vector<int>arr){
    int n = arr.size();
    for(int i = n-1;i>0;i--){
        if((arr[i]-arr[i-1])<0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    vector<int>arr = {1,2,1,5};
    cout<<is_sorted(arr);
    cout<<endl;
    return 0;
}