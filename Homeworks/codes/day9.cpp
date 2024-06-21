
// 1
// Day 9/180: Pattern Printing-2
// First Pattern:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
// 1 2 3 4 5 6 7
// Second Pattern:
// A
// A B
// A B C
// A B C D
// A B C D E
// Third Pattern:
// 10
// 10 11
// 10 11 12
// 10 11 12 13
// 10 11 12 13 14
// 10 11 12 13 14 15
// Fourth Pattern:
// A B C D
// A B C
// A B
// A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    // 2
    cout << endl;
    for (int i = 65; i <= 69; i++)
    {
        for (char j = 65; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // 3.
    cout << endl;
    for (int i = 10; i <= 15; i++)
    {
        for (int j = 10; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    // 4.
    cout << endl;
    for (char i = 68; i >= 65; i--)
    {
        for (char j = 65; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}