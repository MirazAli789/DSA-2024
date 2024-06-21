#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{

    if (n == 1)
        return 0;

    else if (n == 2)
        return 1;

    else
    {
        int last = 0, prev = 1;
        int curr;
        for (int i = 3; i <= n; i++)
        {
            curr = last + prev;
            last = prev;
            prev = curr;
        }

        return curr;
    }
}
//using arrays
int fibonacci(int n){
    int arr[100];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2;i<=n;i++){
        arr[i] = arr[i-1]+arr[i-2];
    }

    return arr[n-1];
}
int main()
{
    cout << fib(1);
    cout<<endl;
    cout<<fibonacci(1);
    cout << endl;
    return 0;
}