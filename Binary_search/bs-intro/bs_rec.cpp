#include <bits/stdc++.h>
using namespace std;
int bin_search(vector<int>arr,int n,int low,int high,int key){
    if(low>high)
    return -1;
    int mid = low+(high-low)/2;
    if(arr[mid]==key) return mid;
    else if(arr[mid]>key) return bin_search(arr,n,low,mid-1,key);
    else return bin_search(arr,n,mid+1,high,key);
}
int main()
{
    vector<int>arr = {1,3,6,9,10,16,23,45,61,76,82,90,98,99,105};
    int n = arr.size();
    cout<<bin_search(arr,n,0,n-1,99);
    cout << endl;
    return 0;
}
