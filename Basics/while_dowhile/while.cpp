#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n, i = 1;
    // cout << "Enter n\n";
    // cin >> n;
    // while (i <= 10)
    // {
    //     cout << n << " * " << i << " = " << n * i << endl;
    //     i += 1;
    // }

    // print the factors of a number
    // int n, i = 1;
    // cout << "Enter n\n";
    // cin>>n;
    // while (i<=n)
    // {
    //     if(n%i==0){
    //         cout<<i<<" ";
            
    //     }
    //     i++;
    // }
    // print the even numbers from 1 to n
    int n, i = 1;
    cout << "Enter n\n";
    cin>>n;
    while (i<=n)
    {
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }
    
    return 0;
}