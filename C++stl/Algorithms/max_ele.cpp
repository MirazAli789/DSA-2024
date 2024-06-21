#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,5,4};
    int maxi = *max_element(arr,arr+5);
    cout<<maxi;
    cout<<endl;
    return 0;
}