#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
            continue;

        cout << i << " ";
    }
    cout<<endl;
    for (int i = 0; i <= 100; i++)
    {
        if(i==45)
        break;

        cout<<i<<" ";
    }
    
    return 0;
}