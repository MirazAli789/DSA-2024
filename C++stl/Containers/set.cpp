#include<bits/stdc++.h>
using namespace std;
void print(set<int>s){
    for(auto it = s.begin();it!=s.end();it++){
        cout<<(*it)<<" ";
    }
    
}
int main()
{
    //sorted and unique 
    //two identical elemnts cannot be present
    set<int>st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    st.insert(5);
    // print(st);
    // st.erase(5);
    // print(st);
    // auto it = st.find(3);
    // cout<<(*it);
    // auto it = st.find(45);
    return 0;
}