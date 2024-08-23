#include <bits/stdc++.h>
using namespace std;
int main()
{
    // char arr[5];
    // cin >> arr;
    // cout << arr;
    // string s = "miraz ali";
    // cout<<s;
    // string s1 = "Miraz ";
    // string s2 = "Ali";
    // string s3 = s1+s2;
    // s3+="p";// this can be also done using s3.push_back("p")
    // s3.push_back('p');
    // s3.pop_back();
    // cout<<s3;
    //cin doesn't allows spaces so, we use getline function
    string str1;
    getline(cin,str1);
    str1.push_back('l');
    cout<<str1;
    return 0;
}
