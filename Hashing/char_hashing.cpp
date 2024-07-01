// hashing charecters using hash array
// given string contains only small alphabets
#include <bits/stdc++.h>
using namespace std;
int cha_fr(string str,char key){
    //string contains only lowercase lettters
    int cnt=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==key){
            cnt++;
        }
    }
    return cnt;
}
int char_frequency(string str, char key)
{
    //string contains only lowercase letters
    int hash[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i]-97]++;
    }
    return hash[key-97];
}
int char_hash(string str,int key){
    //string contains both upper and loweracse letters
    int hash[256] = {0};
    for(int i=0;i<str.size();i++){
        hash[str[i]]++;
    }
    return hash[key];
}
int main()
{
    string str = "AeRyfdIOUYrgerAIreUTgffsdfIsad";
    // cout << char_frequency(str, 'f');
    cout<<char_hash(str,'A');
    cout << endl;
    return 0;
}