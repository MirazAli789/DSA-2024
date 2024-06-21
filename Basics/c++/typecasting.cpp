#include <bits/stdc++.h>
using namespace std;
int main()
{
    //65 == 'A'
    //97 == 'a'
    //256 total characters
    int a = 10;
    char c = 'r';
    a = c;
    cout << a << endl; //114

    int b = 66;
    char d = 'q';
    d = b;
    cout << d << endl; // B

    int e = 100;
    cout<<(char)e; //d
    return 0;
}