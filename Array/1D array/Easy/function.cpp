#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
    cout << sizeof(arr) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    print(arr, 5);
    cout << endl;
    cout << sizeof(arr) << " ";
    return 0;
}