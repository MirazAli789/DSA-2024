#include<bits/stdc++.h>
using namespace std;
void print(unordered_set<int>us){
    for(auto i=us.begin();i!=us.end();i++){
            cout<<(*i)<<" ";
    }
}
int main()
{
    unordered_set<int>us;
    us.insert(1);
    us.insert(5);
    us.insert(4);
    us.insert(3);
    us.insert(23);
    us.erase(4);
    auto it = us.find(3);
    cout<<(*it);
    cout<<endl;
    print(us);
    cout<<endl;
    return 0;
}