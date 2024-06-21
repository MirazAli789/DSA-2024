#include <bits/stdc++.h>
using namespace std;
int main()
{
    // given a charecter, print vowel if it is a vowel
    // otherwise print consonant

    // char ch;
    // cout << "Enter a charecter\n";
    // cin >> ch;
    // switch (ch)
    // {
    // case 'a':
    //     cout << "vowel\n";
    //     break;
    // case 'e':
    //     cout << "vowel\n";
    //     break;
    // case 'i':
    //     cout << "vowel\n";
    //     break;
    // case 'o':
    //     cout << "vowel\n";
    //     break;
    // case 'u':
    //     cout << "vowel\n";
    //     break;
    // default:
    //     cout << "Consonant\n";
    //     break;
    // }

    // user gives a number print the the day of the week in sequence
    int n;
    cout << "Enter a number\n";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "wednessday";
        break;
    case 4:
        cout << "thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday\n";
        break;
    case 7:
        cout << "sunday\n";
        break;
    default:
        cout << "Invalid";
        break;
    }
    return 0;
}