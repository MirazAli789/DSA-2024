#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for (int i = 100; i <= 200; i++)
    // {
    //     cout << i << endl;
    // }

    // print all the charecters from a to z(small letters)
    // 'a' = 97, 'b' = 98 ........ 'z' = 122
    // cout << "Small letters\n";
    // for (char i = 97; i < 123; i++)
    // {
    //     cout << i << endl;
    // }

    // // capital letters
    // cout << "Capital letters\n";
    // for (char i = 65; i < 91; i++)
    // {
    //     cout << i << endl;
    // }

    // print the numbers from n to 1;
    // int n;
    // cout << "Enter the value of n\n";
    // cin >> n;
    // for (int i = n; i >= 1; i--)
    // {
    //     cout << i << endl;
    // }

    // print this sequence 1,4,7,10........100
    // for (int i = 1; i <= 100; i += 3)
    // {
    //     cout << i <<" ";
    // }

    // print the multiplication table of n
    // int n;
    // cout << "Enter the value of n\n";
    // cin >> n;
    // for (int i = 1; i < 101; i++)
    // {
    //     cout << n << "*" << i << "=" << i * n << endl;
    // }

    // print the power of any number
    // int n, pow, sum = 1;
    // cout << "n=?\n";
    // cin >> n;
    // cout << "pow=?\n";
    // cin >> pow;
    // for (int i = 0; i < pow; i++)
    // {
    //     sum *= n;
    // }
    // cout << n << "^" << pow << "=" << sum;

    // alternative approach
    // int n, pow, sum;
    // cout << "n=?\n";
    // cin >> n;
    // cout << "pow=?\n";
    // cin >> pow;
    // sum = n;
    // for (int i = 1; i < pow; i++)
    // {
    //     sum *= n;
    // }
    // cout << sum << endl;

    // sum of n natural numbers
    // int n, sum = 0;
    // cout << "Enter the value of n\n";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << "The sum of " << n << " natural numbers = " << sum;

    // factorial of any number
    // int n, fact = 1;
    // cout << "Enter the number\n";
    // cin >> n;
    // for (int i = n; i >= 1; i--)
    // {
    //     fact *= i;
    // }
    // cout << "The factorial of " << n << " is = " << fact;

    // prime number
    // int n;
    // cout<<"Enter the number\n";
    // cin>>n;
    // if(n<2){
    //     cout<<n<<" is not a prime number\n";
    //     return 0;
    // }
    // else{
    //     for (int i = 2; i < n; i++)
    //     {
    //         if(n%i==0){
    //             cout<<n<<" is not a prime number\n";
    //             return 0;
    //         }
    //     }
    //     cout<<n<<" is a prime number\n";
    // }

    // fibonacci series
    // int n;
    // cout << "Enter the number\n";
    // cin >> n;
    // if (n == 1)
    // {
    //     cout << 0;
    // }
    // else if (n == 2)
    // {
    //     cout << 1;
    // }
    // else
    // {
    //     int last = 0, prev = 1, curr = 1;
    //     for (int i = 3; i < n; i++)
    //     {
    //         curr = last + prev;
    //         last = prev;
    //         prev = curr;
    //     }
    //     cout << curr;
    // }

    int n;
    cout << "Enter n\n";
    cin >> n;
    int last = 0;
    int prev = 1;
    int curr;
    if (n == 1)
    {
        cout << 0;
    }
    else if (n == 2)
    {
        cout << 1;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            curr = last + prev;
            last = prev;
            prev = curr;
        }
        cout << curr;
    }
    return 0;
}