//given arr[4] = {1,2,3,5}
// n =5;
// miising number = 4
#include <bits/stdc++.h>
using namespace std;
int missing_better(vector<int> arr, int n)
{
    map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }

    for(auto i = 0;i<=n;i++){
        if(mp[i]==0){
            return i;
        }
    }
}
int missing_optimal(vector<int>arr,int n){
    int xor1=0,xor2=0;
    for(int i=1;i<=n;i++){
        xor1^=i;
    }
    for(int i=0;i<arr.size();i++){
        xor2^=arr[i];
    }
    return (xor1^xor2);
}
int main()
{
    vector<int> v(4);
    v = {0, 1, 4, 3};
    cout << missing_optimal(v, 4);
    cout << endl;
    return 0;
}
