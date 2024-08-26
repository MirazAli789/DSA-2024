//check whether a string is a pallindrome string: using recursion
#include<bits/stdc++.h>
using namespace std;
bool check_pallindrome(string s,int i, int j)
{
    if(i>j)
    return true;

    else if(s[i]!=s[j])
    {
        return false;
    }

    else
    return check_pallindrome(s,i+1,j-1);

}
int main()
{
    string s = "mom";
    cout<<check_pallindrome(s,0,s.size()-1);
    cout<<endl;
    return 0;
}
