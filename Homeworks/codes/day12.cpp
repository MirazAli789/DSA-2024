#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    1: Temperature Range: Write a program that checks if a given temperature
    is suitable for swimming. If the temperature is between 70 and 90
    (Excluded) degrees Fahrenheit print yes, else NO.
    2: Even and Positive Number: Write a program that prints “YES” if a given
    number is both even and positive, otherwise it will print “NO”.
    3: Age Check: Implement a program that checks if a person is a teenager.
    A teenager is someone whose age is between 13 and 19 (inclusive).
    4: Take three numbers a,b,c from the user, print yes if a is either greater
    than b or c. Otherwise print NO.
    5: What will be the result below according to the precedence table.
    ● 2*3-48==5/4*6
    ● 6<<2-4*8/2
    ● 5>4<3/2-8%4+5
    ● 14-8+92>>2+70
    */
    // 1
    // int temp;
    // cout << "Enter the temparature\n";
    // cin >> temp;
    // if (temp >= 70 && temp < 90)
    // {
    //     cout << "Yes";
    // }
    // else
    // {
    //     cout << "No";
    // }

    // 2
    // int num;
    // cout << "Enter number\n";
    // cin >> num;
    // if (num % 2 == 0 && num > 0)
    // {
    //     cout << "Yes";
    // }
    // else
    // {
    //     cout << "No";
    // }
    // 3
    // int age;
    // cout << "Enter your age\n";
    // cin >> age;
    // if (age >= 13 && age <= 19)
    // {
    //     cout << "You are a teenager\n";
    // }
    // else
    // {
    //     cout << "You are not a teenager\n";
    // }

    // 4
    // int a,b,c;
    // cout<<"Enter a\n";
    // cin>>a;
    // cout<<"Enter b\n";
    // cin>>b;
    // cout<<"Enter c\n";
    // cin>>c;
    // if(a>b || a>c){
    //     cout<<"Yes\n";
    // }
    // else{
    //     cout<<"No\n";
    // }

    // 5
    cout<<(2*3-48==5/4*6)<<endl;
    cout<<(6<<2-4*8/2)<<endl;
    cout<<(5>4<3/2-8%4+5)<<endl;
    cout<<(14-8+92>>2+70)<<endl;
    return 0;
}