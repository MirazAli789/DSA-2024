//a = {1,2,3,3,4,4}
//b = {2,4,5};
//ans = {1,2,3,4,5}
#include<bits/stdc++.h>
using namespace std;
vector<int> merge_array(vector<int>a,vector<int>b){
    set<int>s_a;
    set<int>s_b;
    for(int i=0;i<a.size();i++){
        s_a.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
        s_b.insert(b[i]);
    }

    a.clear();
    b.clear();
    for(auto it = s_a.begin();it!=s_a.end();it++){
        a.push_back(*it);
    }
    for(auto it = s_b.begin();it!=s_b.end();it++){
        b.push_back(*it);
    }

    vector<int>ans;
    int i=0,j=0;
    while(i<a.size()&&j<b.size()){
      if(a[i]<b[j]){
        ans.push_back(a[i]);
        i++;
      }
      else if(a[i]==b[j]){
        ans.push_back(a[i]);
        i++;
        j++;
      }
      else{
        ans.push_back(b[j]);
        j++;
      }
    }
    while(i<a.size()){
      ans.push_back(a[i]);
      i++;
    }
    while(j<b.size()){
      ans.push_back(b[j]);
      j++;
    }
    return ans;
}
int main()
{
    vector<int>a(4);
    a = {1,2,3,3};
    vector<int>b(3);
    b = {2,2,2};
    vector<int>ans = merge_array(a,b);
    for(auto it = ans.begin();it!=ans.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    return 0;
}
