#include<bits/stdc++.h>
using namespace std;
long long fact(long long n){
    if(n==0)
    return 1;

    return n*fact(n-1);
}
vector<long long> factn(long long n) {
    // Write Your Code Here
    vector<long long>v;
    for(long long i=0;i<=n;i++){
        v.push_back(fact(i));
    }
    sort(v.begin(),v.end());
    vector<long long>ans;
    set<long long>st;
    for(long long i=0;i<=n;i++){
       for(long long j=1;j<=n;j++){
           if(j==v[i]){
               st.insert(j);
           }
       }
    }
    for(auto it = st.begin();it!=st.end();it++){
        ans.push_back((*it));
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){

    vector<long long>v = factn(5040);
    for(auto it = v.begin();it!=v.end();it++){
        cout<<(*it)<<endl;
    }
    return 0;
}
