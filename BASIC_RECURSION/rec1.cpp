//when a function calls itself again and again until a specified condition met then that phenomena is callled recursion
//and that condition is called base condition
#include<bits/stdc++.h>
using namespace std;
//example of recursion without base condition

void print(){
    cout<<1;
    print();

}

//example of recursion with base condition 
void prinl(int i,int n){
    if(i>n) //base condition
    return;

    cout<<i<<" ";
    prinl(i+1,n); 

}
int main()
{
    // print();
    // cout<<endl;
    int n;
    cout<<"Enter n\n";
    cin>>n;
    prinl(1,n);
    return 0;
}
