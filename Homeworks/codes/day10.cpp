/*
1.
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1

2.
        A
      B B
    C C C
  D D D D
E E E E E

3.
        5
      5 4
    5 4 3
  5 4 3 2
5 4 3 2 1

4.
        E
      E D
    E D C
  E D C B
E D C B A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1.
    int n;
    cout << "Enter n\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 2.
    for (int i = 1; i <= n; i++)
    {
        char name = 'A' + (i - 1);
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << name << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 3.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }
        for (int j = n; j >= n - (i - 1); j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    // 3.
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            char name = 'E' - (j - 1);
            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}