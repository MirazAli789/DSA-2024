#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declaring a 2d array
    //  int arr[2][3] = {{1,2,3},
    //                  {4,5,6}};
    //  for(int i = 0;i<2;i++)
    //  {
    //      for(int j = 0;j<3;j++)
    //      {
    //          cout<<arr[i][j]<<" ";
    //      }
    //      cout<<endl;
    //  }
    int arr[2][3];
    cout << "Enter elements\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
