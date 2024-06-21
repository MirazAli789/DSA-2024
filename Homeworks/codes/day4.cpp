// Day 4/180 If-Else and For Loop

// If-else
// Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
// Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
// Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
// Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

//  For Loop
// Print “India will win the World Cup 2023”, 20 times.
// Print all Odd numbers from 1 to n, take n as an input from the user.
// Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

// 1.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // // 1.
    // int n, m;
    // cout << "Enter two numbers\n";
    // cin >> n >> m;
    // if (n > m)
    // {
    //     cout << n << " is greater\n";
    // }
    // else
    // {
    //     cout << m << " is greater\n";
    // }

    // 2.
    // int age;
    // cout<<"Enter your age\n";
    // cin>>age;
    // if(age>=18){
    //     cout<<"You are adult\n";
    // }
    // else{
    //     cout<<"you are a teenager\n";
    // }

    // 3.
    // int num;
    // cout << "Enter a number\n";
    // cin >> num;
    // switch (num)
    // {
    //     case 1:
    //         cout << "Monday\n";
    //         break;
    //     case 2:
    //         cout << "Tuesday\n";
    //         break;
    //     case 3:
    //         cout << "Wednessday\n";
    //         break;
    //     case 4:
    //         cout << "Thursday\n";
    //         break;
    //     case 5:
    //         cout << "Friday\n";
    //         break;
    //     case 6:
    //         cout << "Saturday\n";
    //         break;
    //     case 7:
    //         cout << "Sunday\n";
    //         break;
    //     default:
    //         break;
    // }

    // 4.
    // int age;
    // cout << "Enter your age\n";
    // cin >> age;

    // if (age <= 12 || age >= 65)
    // {
    //     cout << "Here is your discount\n";
    // }
    // else
    // {
    //     cout << "No discount for you\n";
    // }

    // 5.
    // for loop
    // print the word 5 times
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "India will win Wc 2023\n";
    // }

    // 6.
    // print all the odd numbers from 1 to n
    // int n;
    // cout << "Enter the number of n\n";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         cout << i << endl;
    //     }
    // }

    // 7.
    // print all the numbers from 1 to n which is divisible by 4
    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}