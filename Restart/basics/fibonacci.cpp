#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    int arr[1000];
    arr[0] = 0, arr[1] = 1;
    for (int i = 2; i <= n + 1; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n - 1];
}
int main()
{
    cout << fibonacci(5);
    cout << endl;
    return 0;
}