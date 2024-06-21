/*
Day 8/180: Pattern Printing


    First Pattern:

       4 4 4 4 4 4
       4 4 4 4 4 4
       4 4 4 4 4 4
       4 4 4 4 4 4
       4 4 4 4 4 4

    Second Pattern:

       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25


   Third Pattern:

    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216

   Fourth Pattern:

    F G H I J K
    F G H I J K
    F G H I J K
    F G H I J K
    F G H I J K

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1.
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            cout << 4 << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 2.
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << j * j << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 3.
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            cout << (j * j * j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 4.
    /*
    F G H I J K
    F G H I J K
    F G H I J K
    F G H I J K
    F G H I J K
    */
    for (int i = 1; i <= 5; i++)
    {
        for (char j = 'F'; j <= 'K'; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}