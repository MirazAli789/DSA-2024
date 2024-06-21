#include<bits/stdc++.h>
using namespace std;
int main()
{
    // first come first served
    //fornt = deletion, back = insertion
    queue<int>q;
    q.push(323);
    q.push(233);//front
    q.push(123);
    q.push(243);
    q.push(653);
    q.pop();
    cout<<q.front();
    cout<<endl;
    q.push(123);

    cout<<q.back();


    return 0;
}