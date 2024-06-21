#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int arr[5] = {1, 3, 2, 1, 2};
    int hash[4] = {0};
    map<int,int>mp;
    for(int i=0;i<5;i++){
        mp[arr[i]]++;
    }
    // hash array which keeps the record of frequencies of the elements
    for (int i = 0; i < 5; i++)
    {
        hash[arr[i]] += 1;
    }
    //hash[] = {0,2,2,1}
    cout << "Enter the number whose frequency to be calculated? " << endl;
    cin >> num;
    cout << hash[num];
    cout << endl;
    return 0;
}
