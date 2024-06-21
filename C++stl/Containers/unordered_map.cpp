#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,int>mp){
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<" ";
        cout<<endl;
    }
}
int main()
{
    unordered_map<int,int>mp;
    mp.insert({2,4});
    mp.insert({1,2});
    mp.insert({3,2});
    print(mp);
    cout<<endl;
    return 0;
}