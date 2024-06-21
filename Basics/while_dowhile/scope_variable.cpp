#include <bits/stdc++.h>
using namespace std;
int z = 123; //global variable

void print(){
    cout<<z<<endl;
}
int main()
{
    int n = 10; // local variable of main function
    cout << n << endl;
    // int n =23; //redefinition of n
    // cout<<n;

    int i = 10;
    int temp;
    if (i == 10)
    {
        int i = 23; //this i is a local variable of the if statement
        temp = i;
        cout << i << endl; //local variable of if statement
    }
    cout<<temp;
    int j = 10; //local variable of main()
    for (int j = 20; j <= 30; j++)
    {
        cout<<j<<" "; //local variable of for loop
    }
    cout<<endl;
    print();
    return 0;
}
