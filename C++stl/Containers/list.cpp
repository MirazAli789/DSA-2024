#include<bits/stdc++.h>
using namespace std;
void print(list<int>ls){
    for(auto it = ls.begin();it!=ls.end();it++){
        cout<<(*it)<<" ";
    }
    
}
int main()
{
    // same as vector but front operations are possible
    list<int>ls;
    ls.push_back(12);
    ls.push_front(234);
    ls.push_front(3);
    ls.push_back(56);
    ls.pop_front();
    ls.pop_back();  
    ls.insert(ls.begin(),56);
    ls.insert(ls.begin(),12);
    print(ls);
    return 0;
}