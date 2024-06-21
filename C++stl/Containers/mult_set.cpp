#include<bits/stdc++.h>
using namespace std;
void print(multiset<int>ms){
    for(auto it = ms.begin();it!=ms.end();it++){
        cout<<(*it)<<" ";
    }
}
int main()
{   
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    print(ms);
    cout<<endl;
    // cout<<ms.count(1);
    // auto it = ms.find(1);
    // // ms.erase(it);
    // cout<<endl;
    ms.erase(1);
    print(ms);

    return 0;
}