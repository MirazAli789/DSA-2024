#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(string s){
	int start = 0,end = s.size()-1;
	while(start<=end){
		if(s[start]!=s[end]){
			return false;
		}
        start++;
        end--;
	}
	return true;
}
int main()
{
	string s;
	cout<<"Enter a string\n";
	cin>>s;
	if(check_palindrome(s))
	{
		cout<<"The string is a pallindrome\n";
	}
	else
	{
		cout<<"The string is not a pallindrome\n";
	}
	return 0;
}