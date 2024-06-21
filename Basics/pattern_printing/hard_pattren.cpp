#include <bits/stdc++.h>
using namespace std;
int main()
{
  // 1.
  // print this pattern
  /*
   *
   * *
   * * *
   * * * *
   * * * * *
   */
  /*
  row1 -> space ->4 times and star-> 1
  row2 -> space ->3 times and star-> 2
  row3 -> space ->2 times and star-> 3


  */
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= (5 - i); j++)
    {
      cout << "  ";
    }
    for (int k = 1; k <= i; k++)
    {
      // cout<<" ";
      cout << "* ";
    }
    cout << endl;
  }

  cout << endl;
  // int n;
  // cout << "Enter n?\n";
  // cin >> n;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n - i; j++)
  //   {
  //     cout << "  ";
  //   }
  //   for (int j = 1; j <= i; j++)
  //   {

  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // 2
  /*
          1
        2 2
      3 3 3
    4 4 4 4
  5 5 5 5 5
  */
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= (5 - i); j++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }

  // int n;
  // cout << "Enter n?\n";
  // cin >> n;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= (n - i); j++)
  //   {
  //     cout << "  ";
  //   }
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout << i << " ";
  //   }
  //   cout << endl;
  // }

  // 3
  /*
          1
        1 2
      1 2 3
    1 2 3 4
  1 2 3 4 5
  */
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= (5 - i); j++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
  // int n;
  // cout << "Enter n\n";
  // cin >> n;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= (n - i); j++)
  //   {
  //     cout << "  ";
  //   }
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  // 4
  /*
          A
        A B
      A B C
    A B C D
  A B C D E
  */
  for (char i = 65; i <= 69; i++)
  {
    for (char j = 1; j <= 69 - i; j++)
    {
      cout << "  ";
    }
    for (char j = 65; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
  for (int i = 1; i <= 5; i++)
  {

    for (int j = 1; j <= (5 - i); j++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++)
    {
      char name = 'A' + (j - 1);
      cout << name << " ";
    }
    cout << endl;
  }
  // int n;
  // cout<<"Enter n\n";
  // cin>>n;

  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= (n- i); j++)
  //   {
  //     cout << "  ";
  //   }
  //   for (char j = 'A'; j <= 'A' + (i - 1); j++)
  //   {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  // 5
  /*
          1
        2 1
      3 2 1
    4 3 2 1
  5 4 3 2 1
  */
  cout<<endl;
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= (5 - i); j++)
    {
      cout << "  ";
    }
    for (int j = i; j >= 1; j--)
    {
      cout << j << " ";
    }
    cout << endl;
  }

  return 0;
}