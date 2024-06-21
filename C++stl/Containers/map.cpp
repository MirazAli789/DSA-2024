#include<bits/stdc++.h>
using namespace std;
void print(map<int,int>mp){
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<" ";
        cout<<endl;
    }
}
void print2(map<pair<int,int>,int>mpp){
    for(auto i:mpp){
        cout<<i.first.first<<" "<<i.first.second<<" "<<i.second;
        cout<<endl;
    }
}
void print3(map<int,pair<int,int>>mpi){
    for(auto it:mpi){
        cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<" ";
        cout<<endl;
    }
}
void print4(map<pair<int,int>,pair<int,int>>mpe){
    for(auto it:mpe){
        cout<<it.first.first<<" "<<it.first.second<<" "<<it.second.first<<" "<<it.second.second<<" ";
        cout<<endl;
    }
}
int main()
{
    //maps are ordered key value pairs
    map<int,int>mp;
    mp.insert({1,2});
    mp.insert({2,4});
    mp.insert({3,4});
    // cout<<mp[1];
    // cout<<endl;
    // cout<<mp[2];//mp[key] = value
    print(mp);
    cout<<endl;
    map<pair<int,int>,int>mpp;
    mpp.insert({{1,2},2});
    mpp.insert({{2,3},4});
    mpp.insert({{4,5},6});
    print2(mpp);
    cout<<endl;
    map<int,pair<int,int>>mpi;
    mpi.insert({1,{2,3}});
    mpi.insert({2,{3,4}});
    mpi.insert({5,{6,7}});
    cout<<mpi[1].second<<endl;
    print3(mpi);
    cout<<endl;
    map<pair<int,int>,pair<int,int>>mpe;
    mpe.insert({{1,2},{3,4}});
    mpe.insert({{5 ,6},{7,8}});
    mpe.insert({{8,9},{10,11}});
    print4(mpe);
    return 0;
}