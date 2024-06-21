#include <bits/stdc++.h>
using namespace std;
int main()
{
    // print this pattern
    /*
     * * * * *
     * * * * *
     * * * * *
     * * * * *
     * * * * *
     */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    // print this pattern
    /*
     * * * * * * *
     * * * * * * *
     * * * * * * *
     * * * * * * *
     * * * * * * *
     */
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    // print this pattern
    /*
     10 10 10 10 10
     10 10 10 10 10
     10 10 10 10 10
     10 10 10 10 10
     */
    cout << endl;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "10"
                 << " ";
        }
        cout << endl;
    }

    // print this pattern
    /*
     1 1 1 1 1
     2 2 2 2 2
     3 3 3 3 3
     4 4 4 4 4
     5 5 5 5 5
     */

    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // print this pattern
    /*
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    */
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    // print this pattern
    /*
    1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25
    */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << j * j << " ";
        }
        cout << endl;
    }

    //  print this pattern
    /*
    1 8 27 64 125
    1 8 27 64 125
    1 8 27 64 125
    1 8 27 64 125
    1 8 27 64 125
    */
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << j * j * j << " ";
        }
        cout << endl;
    }

    // print this pattern
    /*
    a a a a a
    b b b b b
    c c c c c
    d d d d d
    e e e e e
    */
    cout << endl;
    for (char i = 'a'; i <= 'e'; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
    // alternative
    for (int i = 1; i <= 5; i++)
    {
        char name = 'a' + (i - 1);
        for (int j = 1; j <= 5; j++)
        {
            cout << name << " ";
        }
        cout << endl;
    }

    cout << endl;
    // print this pattern
    /*
    a b c d e
    a b c d e
    a b c d e
    a b c d e
    a b c d e
    */
    for (int i = 1; i <= 5; i++)
    {
        for (char j = 'a'; j <= 'e'; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // print this pattern
    cout << endl;
    /*
    1 2 3 4 5
    6 7 8 9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
    */

    int count = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }
    cout << endl;
    // alternative method
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << (i - 1) * 5 + j << " ";
        }
        cout << endl;
    }

    return 0;
}