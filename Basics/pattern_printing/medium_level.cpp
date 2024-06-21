#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1.print this pattern
    /*

    *
    * *
    * * *
    * * * *
    * * * * *

    */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    cout << endl;

    // 2
    /*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // 3.
    /*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 4.
    /*
    1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1
    */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // 4.
    /*
    a
    b b
    c c c
    d d d d
    e e e e e
    */
    cout << endl;
    for (char i = 'a'; i <= 'e'; i++)
    {
        for (int j = 97; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
    // alternative approach
    for (char i = 1; i <= 5; i++)
    {
        char name = 'a' + (i - 1);
        for (int j = 1; j <= i; j++)
        {
            cout << name << " ";
        }
        cout << endl;
    }

    cout << endl;
    // 5.
    /*

     * * * * *
     * * * *
     * * *
     * *
     *

    */
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // alternative

    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // 6.

    /*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    */
    cout << endl;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    // alternative
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - (i - 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // 7.

    /*
    5
    5 4
    5 4 3
    5 4 3 2
    5 4 3 2 1
    */
    cout<<endl;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout<<endl;
    // alternative
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= 5-(i-1); j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}