#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declaration of an array
    //  int arr[10] = {1,2,3,34,4,6,45,3,3,53};
    //  //accssing elements
    //  cout<<arr[0];
    //  cout<<endl;
    //  cout<<arr[1];
    //  cout<<endl;
    //  for(int i=0;i<10;i++)
    //  cout<<arr[i]<<" ";
    int arr[5];
    cout << "Enter elements\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // address of the array elemnts
    cout << *(arr);
    cout << endl;
    cout << *(arr + 1);
    cout << endl;
    cout << *(arr + 2);
    cout << endl;
    cout << *(arr + 3);
    cout << arr;
    // initializing with 0
    int a[5] = {0};
    return 0;
}