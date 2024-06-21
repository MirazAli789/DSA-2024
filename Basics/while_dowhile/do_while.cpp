#include <bits/stdc++.h>
using namespace std;
int main()
{
    // sum of n natural numbers
    // int n, i = 1, sum = 0;
    // cout << "Enter n\n";
    // cin >> n;
    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i <= n);
    // cout<<"sum of "<<n<<" natural numbers = "<<sum;

    // print from 1 to n
    int n, i = 1, sum = 0;
    cout << "Enter n\n";
    cin >> n;
    do
    {
        cout<<i<<" ";
        i++;
    } while (i<=n);
    
    return 0;
}