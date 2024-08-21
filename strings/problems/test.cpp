#include <bits/stdc++.h>
using namespace std;
void rev(string &s)
{
    int start = 0, end = s.size() - 1;
    while (start <= end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}
int main()
{

    // char arr[10];
    // cout << "Enter the string\n";
    // cin >> arr;
    // arr[2] = '\0';
    // cout << arr << endl;
    // find the length of string
    // char str1[10];
    // cout << "Enter the string \n";
    // cin >> str1;
    // int len = 0;
    // while (str1[len] != '\0')
    // {
    //     len++;
    // }
    // cout << "The length of the string is : " << len << endl;
    // reverse a string
    string s;
    cout << "Enter a string\n";
    cin >> s;
    rev(s);
    cout << s << endl;
    return 0;
}