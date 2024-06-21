// Day 5/180: For Loop in advance
// 1. Print number from 280 to 250 with the help of for loop.
// 2. Print char from ‘A’ to ‘Z’ with the help of a for loop.
// 3. Print char from ‘Z’ to ‘A’ with the help of a for loop.
// 4. There is an Arithmetic Progression, First number is 220 and Common
// Difference is 7. So print all the numbers from 220 to 730 which follow
// the AP.
// 5. Print Sum of square of first n natural number.
// 6. Print Sum of cube of first n natural number
// 7. Print n’th Fibonacci number.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1.
    // for (int i = 280; i >= 250; i--)
    // {
    //     cout << i << endl;
    // }
    // cout << endl;
    // // 2.
    // for (char i = 65; i <= 90; i++)
    // {
    //     cout << i << endl;
    // }
    // cout << endl;
    // // 3.
    // for (char i = 90; i >= 65; i++)
    // {
    //     cout << i << endl;
    // }
    // cout << endl;
    // // 4.
    // for (int i = 220; i <= 730; i += 7)
    // {
    //     cout << i << endl;
    // }

    // // 5.
    // int sum = 0;
    // int n;
    // cout << "Enter n\n";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i * i;
    // }
    // cout << "sum of square of " << n << " natural numbers =" << sum << endl;

    // // 6.
    // int csum =0;
    // int m;
    // cout<<"Enter m\n";
    // cin>>m;
    // for (int i = 1; i <=m; i++)
    // {
    //     csum+=(i*i*i);
    // }
    // cout << "sum of cube of " << m << " natural numbers =" << csum << endl;

    // 7.
    int last =0,prev=1,curr,n;
    cout<<"Enter the value of n\n";
    cin>>n;
    if(n==1){
        cout<<0;
    }
    else if(n==2){
        cout<<1;
    }
    else{
        for (int i = 3; i <=n; i++)
        {
            curr=prev+last;
            last=prev;
            prev=curr;
        }
        cout<<curr<<endl;
    }
    return 0;
}