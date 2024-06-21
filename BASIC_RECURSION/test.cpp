#include <bits/stdc++.h>
using namespace std;
// void print(int i, int n)
// {
//     if (i > n)
//         return;

//     cout << i << " ";
//     print(i + 1, n);
// }
// sum(5) = 5+ sum(4)
// sum(4) = 4 + sum(3);
//''' ''''''' ''''''

// sum(1) = 1

int sum(int n)
{
    if (n == 1)
        return 1;

    return n + sum(n - 1);
}
void print(int i,int n){
     if(i>n)
     return;

     print(i+1,n);
     cout<<i<<endl;
}
int main()
{
    // cout<<sum(5);
    print(1,45);
    cout << endl;
    return 0;
}
