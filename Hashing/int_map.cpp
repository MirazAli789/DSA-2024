//integer array hashing using map
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 21, 1, 4, 3};
    map<int, int> mpp;
    for (int i = 0; i < 5; i++)
    {
        mpp[arr[i]]++;
    }
    cout << mpp.size() << endl;
    int num;
    cin >> num;
    cout << num << " appeared " << mpp[num] << " times ";
    cout << endl;
    return 0;
}
