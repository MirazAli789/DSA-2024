#include <bits/stdc++.h>
using namespace std;
void print(map<int,int>mp){
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<" ";
        cout<<endl;
    }
}
void print2(map<pair<int,int>,int>mpp){
    for(auto it:mpp){
        cout<<it.first.first<<" "<<it.first.second<<" "<<it.second;
        cout<<endl;
    }
}
void pritn3(map<int,pair<int,int>>mpe){
    for(auto it:mpe){
        cout<<it.first<<" "<<it.second.first<<" "<<it.second.second;
        cout<<endl;
    }
}
int main()
{
    map<int,int>mp;
    mp.insert({1,2});
    mp.insert({3,4});
    mp.insert({5,6});
    print(mp);

    map<pair<int,int>,int>mpp;
    mpp.insert({{1,2},3});
    mpp.insert({{3,4},2});
    mpp.insert({{2,3},4});
    cout<<endl;
    print2(mpp);
    map<int,pair<int,int>>mpe;
    mpe.insert({1,{2,3}});
    mpe.insert({2,{3,4}});
    mpe.insert({3,{4,5}});
    cout<<endl;
    pritn3(mpe);

    return 0;
}