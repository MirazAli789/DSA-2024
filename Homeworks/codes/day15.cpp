/*
1: Take a number n from the user and print all the even numbers
between 1 and n(inclusive). Do this using while and do while loop
separately.
2: Find the factorial of a number n using a while loop and do a
while loop.
3: Given a number n, print all the numbers from 1 to n(inclusive)
which are not divisible by 3 and 5. (use Continue here).
4: Given a number n, print the corresponding month of it. For n=1,
print Jan, n=2, print Feb..., if the user puts any invalid number,
don’t do anything. (Use switch here)
5: Print all the Capital and small letters using a while loop. It
means A-Z, then a-z.
6: Give a number n, find if it is prime or not, use a while loop and
break here to solve it.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    // 1
    // int n;
    // cout << "Enter n\n";
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     cout << i << " ";
    //     i += 1;
    // }
    // cout << endl;
    // i = 1;
    // do
    // {
    //     cout << i << " ";
    //     i += 1;
    // } while (i <= n);
    // cout<<endl;

    // 2 factorial of a number
    // using while
    // int n;
    // cout << "Enter n\n";
    // cin >> n;
    // int fact = 1;
    // int i = n;
    // while (i >= 1)
    // {
    //     fact *= i;
    //     i--;
    // }
    // cout << "Factorial of " << n << " is " << fact << endl;

    // using do while
    // int n;
    // cout << "Enter n\n";
    // cin >> n;
    // int fact = 1;
    // int i = n;
    // do
    // {
    //     fact *= i;
    //     i--;
    // } while (i >= 1);
    // cout << "Factorial of " << n << " is " << fact << endl;

    // 3
    /*Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here)*/
    // int n;
    // cout << "Enter n\n";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if(i%3==0||i%5==0){
    //         continue;
    //     }
    //     cout<<i<<" ";
    // }

    // 4
    // int n;
    // cout << "Enter n\n";
    // cin >> n;
    // switch (n)
    // {
    // case 1:
    //     cout << "Jan";
    //     break;
    // case 2:
    //     cout << "Feb";
    //     break;
    // case 3:
    //     cout << "Mar";
    //     break;
    // case 4:
    //     cout << "Apr";
    //     break;
    // case 5:
    //     cout << "May";
    //     break;
    // case 6:
    //     cout << "Jun";
    //     break;
    // case 7:
    //     cout << "Jul";
    //     break;
    // case 8:
    //     cout << "Aug";
    //     break;
    // case 9:
    //     cout << "Sep";
    //     break;
    // case 10:
    //     cout << "Oct";
    //     break;
    // case 11:
    //     cout << "Nov";
    //     break;
    // case 12:
    //     cout << "Dec";
    //     break;

    // default:
    //     cout << "Enter valid number\n";
    //     break;
    // }

    // 5
    // char i = 'A';
    // char j = 'a';
    // while (i<='Z')
    // {
    //     cout<<i<<" ";
    //     i++;
    // }
    // cout<<endl;
    // while (j<='z')
    // {
    //     cout<<j<<" ";
    //     j++;
    // }
    // cout<<endl;

    // 6
    int n;
    cout << "Enter n\n";
    cin >> n;
    if (n < 2)
    {
        cout << n << " is not a prime number\n";
        return 0;
    }

    int i = 2;
    while (i <= n - 1)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number\n";
            break;
        }
        i++;
    }
    if (i == n)
    {
        cout << n << " is a prime number\n";
    }

    return 0;
}