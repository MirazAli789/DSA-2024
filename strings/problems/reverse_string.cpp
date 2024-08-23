#include<bits/stdc++.h>
using namespace std;
string reverse_str(string &s){
    int n = s.size();
    int start = 0,end = n-1;
    while(start<=end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}
int main() {
    string s;
    cout<<"Enter a string \n";
    cin>>s;
    cout<<reverse_str(s)<<endl;

    return 0;
}