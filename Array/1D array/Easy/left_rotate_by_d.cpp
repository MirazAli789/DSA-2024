//if the number of rotations we have to perform is multiple of the size of the array then the original array is the answer
// {1,2,3,4,5} k = 5 ans ==> {1,2,3,4,5}
#include <bits/stdc++.h>
using namespace std;
void leftrotate(vector<int> &arr, int n, int d)
{
    d = d % n;
    vector<int> temp;
    for (int i = 0; i < d; i++)
    {
        temp.push_back(arr[i]);
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    int k = 0;
    for (int i = n-d; i < n; i++)
    {
        arr[i] = temp[k];
        k++;
    }
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    leftrotate(arr, arr.size(), 8);
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    return 0;
}
