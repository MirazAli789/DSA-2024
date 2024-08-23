#include<bits/stdc++.h>
using namespace std;
string reverse_string(string &s)
{
    //approach 1:

    // int start = 0, end = s.size()-1;
    // while(start<=end)
    // {
    //     swap(s[start],s[end]);
    //     start++;
    //     end--;
    // }

    //approach 2:
    
    for(int i=0;i<s.size()/2;i++)
    {
        swap(s[i],s[s.size()-i-1]);
    }
    return s;
}
int main()
{
    string s;
    cout<<"Enter a string \n";
    cin>>s;
    cout<<reverse_string(s);
    cout<<endl;
    return 0;
}
