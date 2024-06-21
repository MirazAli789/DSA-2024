// ● Write a program to convert binary numbers to decimal numbers
// using a for loop.
// ● Write a program to convert decimal numbers to binary numbers
// using a for loop.
// ● Write a program to convert decimal numbers to Octal numbers.
// ● Write a program to convert Octal numbers to decimal numbers.
// ● Write a program to convert binary to Octal numbers
// ● Write a program to convert Octal numbers to binary numbers

#include <bits/stdc++.h>
using namespace std;
int main()
{

    // 1 binary to decimal
    // int num, ans = 0, rem, mul = 1;
    // cout << "Enter decimal number\n";
    // cin >> num;
    // int n = num;
    // for (; num != 0; num /= 10)
    // {
    //     rem = num % 10;
    //     ans += rem * mul;
    //     mul *= 2;
    // }
    // cout << "Decimal form of " << n << " = " << ans;

    // 2 decimal to binary
    // int num,ans =0,mul=1,rem;
    // cout<<"Enter decimal number\n";
    // cin>>num;
    // int n = num;
    // for ( ; num!=0; num/=2)
    // {
    //     rem = num%2;
    //     ans+=rem*mul;
    //     mul*=10;
    // }
    // cout << "Binary form of " << n << " = " << ans;

    // 3 decimal to octal
    // int num, ans = 0, rem, mul = 1;
    // cout << "Enter decimal number\n";
    // cin >> num;
    // int n = num;
    // for (; num != 0; num /= 8)
    // {
    //     rem = num % 8;
    //     ans += rem * mul;
    //     mul *= 10;
    // }
    // cout << "Octal form of " << n << " = " << ans;

    // 4 octal to decimal
    // int num, ans = 0, rem, mul = 1;
    // cout << "Enter octal number\n";
    // cin >> num;
    // int n = num;
    // for (; num != 0; num /= 10)
    // {
    //     rem = num % 10;
    //     ans += rem * mul;
    //     mul *= 8;
    // }
    // cout << "decimal form of " << n << " = " << ans;

    // 5 Binary to octal

    // int num, ans = 0, rem, mul = 1;
    // cout << "Enter Binary number\n";
    // cin >> num;
    // int n = num;
    // for (; num != 0; num /= 10)
    // {
    //     rem = num % 10;
    //     ans += rem * mul;
    //     mul *= 2;
    // }

    // int num1, ans1 = 0, rem1, mul1 = 1;
    // num1 = ans;
    // for (; num1 != 0; num1 /= 8)
    // {
    //     rem1 = num1 % 8;
    //     ans1 += rem1 * mul1;
    //     mul1 *= 10;
    // }
    // cout << "Octal form of " << n << " = " << ans1;

    int num, ans = 0, rem, mul = 1;
    cout << "Enter octal number\n";
    cin >> num;
    int n = num;
    for (; num != 0; num /= 10)
    {
        rem = num % 10;
        ans += rem * mul;
        mul *= 8;
    }

    int num1, ans1 = 0, mul1 = 1, rem1;
    num1 = ans;
    for (; num1 != 0; num1 /= 2)
    {
        rem1 = num1 % 2;
        ans1 += rem1 * mul1;
        mul1 *= 10;
    }
    cout << "Binary form of " << n << " = " << ans1;
    return 0;
}